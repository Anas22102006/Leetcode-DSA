class Solution {
public:
    static const int MOD = 1e9 + 7;
    int minS, maxS;
    string s;
    int dp[25][405][2];

    int solve(int pos, int sum, int tight) {
        if (sum > maxS)
            return 0;
        if (pos == s.size()) {
            return (sum >= minS && sum <= maxS) ? 1 : 0;
        }
        if (dp[pos][sum][tight] != -1)
            return dp[pos][sum][tight];

        int limit = tight ? s[pos] - '0' : 9;
        long long ans = 0;

        for (int d = 0; d <= limit; d++) {
            ans += solve(pos + 1, sum + d, tight && (d == limit));
            ans %= MOD;
        }

        return dp[pos][sum][tight] = ans;
    }

    string subtractOne(string str) {
        int i = str.size() - 1;
        while (i >= 0 && str[i] == '0') {
            str[i] = '9';
            i--;
        }
        if (i >= 0)
            str[i]--;

        int j = 0;
        while (j + 1 < str.size() && str[j] == '0')
            j++;
        return str.substr(j);
    }

    int countValid(string x) {
        s = x;
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 1);
    }

    int count(string num1, string num2, int min_sum, int max_sum) {
        minS = min_sum;
        maxS = max_sum;

        int right = countValid(num2);
        string leftStr = subtractOne(num1);
        int left = (num1 == "0") ? 0 : countValid(leftStr);

        int ans = (right - left + MOD) % MOD;
        return ans;
    }
};