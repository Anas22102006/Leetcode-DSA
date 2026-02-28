class Solution {
public:
    bool isPalRange(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l = 0, r = (int)s.size() - 1;

        while (l < r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else {
                return isPalRange(s, l + 1, r) || isPalRange(s, l, r - 1);
            }
        }
        return true;
    }
};