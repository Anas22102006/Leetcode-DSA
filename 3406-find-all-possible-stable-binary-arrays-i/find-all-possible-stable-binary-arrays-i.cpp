class Solution {
public:
    static const int MOD = 1000000007;
    int limit;
    vector<vector<vector<int>>> dp;

    int solve(int zero, int one, int last) {
        if (zero == 0 && one == 0) return 1;
        if (dp[zero][one][last] != -1) return dp[zero][one][last];

        long long ans = 0;

        if (last == 0) {
            for (int k = 1; k <= min(one, limit); k++) {
                ans = (ans + solve(zero, one - k, 1)) % MOD;
            }
        } else {
            for (int k = 1; k <= min(zero, limit); k++) {
                ans = (ans + solve(zero - k, one, 0)) % MOD;
            }
        }

        return dp[zero][one][last] = ans;
    }

    int numberOfStableArrays(int zero, int one, int lim) {
        limit = lim;
        dp.assign(zero + 1, vector<vector<int>>(one + 1, vector<int>(2, -1)));

        long long ans = 0;

        for (int k = 1; k <= min(zero, limit); k++) {
            ans = (ans + solve(zero - k, one, 0)) % MOD;
        }
        for (int k = 1; k <= min(one, limit); k++) {
            ans = (ans + solve(zero, one - k, 1)) % MOD;
        }

        return ans % MOD;
    }
};