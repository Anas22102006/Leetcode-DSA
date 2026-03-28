class Solution {
public:
    struct DSU {
        vector<int> parent, rankv;
        DSU(int n) {
            parent.resize(n);
            rankv.assign(n, 0);
            iota(parent.begin(), parent.end(), 0);
        }
        int find(int x) {
            if (parent[x] == x)
                return x;
            return parent[x] = find(parent[x]);
        }
        void unite(int a, int b) {
            a = find(a);
            b = find(b);
            if (a == b)
                return;
            if (rankv[a] < rankv[b])
                swap(a, b);
            parent[b] = a;
            if (rankv[a] == rankv[b])
                rankv[a]++;
        }
    };

    string findTheString(vector<vector<int>>& lcp) {
        int n = lcp.size();
        for (int i = 0; i < n; i++) {
            if (lcp[i][i] != n - i)
                return "";
            for (int j = 0; j < n; j++) {
                if (lcp[i][j] != lcp[j][i])
                    return "";
            }
        }

        DSU dsu(n);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (lcp[i][j] > 0)
                    dsu.unite(i, j);
            }
        }

        string ans(n, ' ');
        unordered_map<int, char> mp;
        char ch = 'a';
        for (int i = 0; i < n; i++) {
            int p = dsu.find(i);
            if (!mp.count(p)) {
                if (ch > 'z')
                    return "";
                mp[p] = ch++;
            }
            ans[i] = mp[p];
        }

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (ans[i] == ans[j])
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                else
                    dp[i][j] = 0;
                if (dp[i][j] != lcp[i][j])
                    return "";
            }
        }

        return ans;
    }
};