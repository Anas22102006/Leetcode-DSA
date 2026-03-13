class Solution {
public:
    bool canFinish(long long T, int mountainHeight, vector<int>& workerTimes) {
        long long total = 0;

        for (long long w : workerTimes) {
            long long l = 0, r = mountainHeight, best = 0;

            while (l <= r) {
                long long mid = l + (r - l) / 2;
                long long need = w * mid * (mid + 1) / 2;

                if (need <= T) {
                    best = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            total += best;
            if (total >= mountainHeight)
                return true;
        }

        return total >= mountainHeight;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long low = 0;
        long long mn = *min_element(workerTimes.begin(), workerTimes.end());
        long long high = mn * 1LL * mountainHeight * (mountainHeight + 1) / 2;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canFinish(mid, mountainHeight, workerTimes)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};