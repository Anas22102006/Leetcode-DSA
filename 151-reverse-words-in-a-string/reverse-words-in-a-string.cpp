class Solution {
public:
    string reverseWords(string s) {
    vector<string> v;
    s+=" ";
    string word="";
    for(char c:s){
        if(c!=' '){
            word+=c;
        }
        else{
            v.push_back(word);
            word="";
        }
    }
    string ans="";
    for(string str:v){
        if(str!=""){
        ans=str+" "+ans;
        }
    }
    return ans.substr(0,ans.length()-1);    
    }
};