class Solution {
public:
    bool detectCapitalUse(string word) {
        string w=word;
        transform(w.begin(),w.end(),w.begin(),::tolower);
        string mod2=w;
        transform(mod2.begin(),mod2.end(),mod2.begin(),::toupper);
        string mod3=w;
        mod3[0]=toupper(mod3[0]);
        return (word==w || word==mod2 || word==mod3);    
    }
};