class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
    string r="";
    for(string str:words){
        if(r==s){
            break;
        }
        else if(s.find(str)!=string::npos){
            r+=str;
        }
        else{
            break;
        }   
    }
    return (s==r);

    }
};