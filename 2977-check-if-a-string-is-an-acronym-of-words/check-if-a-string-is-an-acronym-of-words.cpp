class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
    string ac="";
    for(string str:words){
        ac+=str[0];
    }
    return (ac==s);    
    }
};