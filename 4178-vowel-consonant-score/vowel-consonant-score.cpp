class Solution {
public:
    bool isvow(char c){
        return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    bool iscon(char c){
        return (c>='a' && c<='z' && !isvow(c));
    }
    int vowelConsonantScore(string s) {
        int v=0;
        int c=0;
        for(char ch:s){
            if(isvow(ch)){
                v++;
            }
            else if(iscon(ch)){
                c++;
            }
        }
        int res=0;
        if(c>0){
            res= floor(v/c);
        }
        return res;
    }
};