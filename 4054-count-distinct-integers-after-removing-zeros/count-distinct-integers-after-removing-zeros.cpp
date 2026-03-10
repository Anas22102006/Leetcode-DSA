class Solution {
public:
    long long countDistinct(long long n) {
        string s = to_string(n);
        int m = s.size();

        vector<long long> p(17, 1);
        for (int i = 1; i < 17; i++) p[i] = p[i - 1] * 9;

        long long ans = 0;

        for (int len = 1; len < m; len++) {
            ans += p[len];
        }

        for (int i = 0; i < m; i++) {
            int d = s[i] - '0';
            ans += 1LL * max(0, d - 1) * p[m - i - 1];
            if (d == 0) return ans;
        }

        return ans + 1;
    }
};