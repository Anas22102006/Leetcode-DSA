class Solution {
public:
    string clearDigits(string s) {
    string res="";
    for(char ch:s){
        if(isalpha(ch)){
            res+=ch;
        }
        else if(isdigit(ch)){
            res= res.substr(0,res.length()-1);
        }
    }
    return res;    
    }
};