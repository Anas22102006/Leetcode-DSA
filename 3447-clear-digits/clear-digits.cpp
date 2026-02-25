class Solution {
public:
    string clearDigits(string s) {
    vector<char> v;
    for(char ch:s){
        if(isalpha(ch)){
            v.push_back(ch);
        }
        else if(isdigit(ch)){
            v.pop_back();
        }
    }
    string res="";
    if(v.size()>0){
        for(char c:v){
            res+=c;
        }
    }
    return res;    
    }
};