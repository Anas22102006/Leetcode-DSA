class Solution {
public:
    int minimizedStringLength(string s) {
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    return s.length();    
    }
};