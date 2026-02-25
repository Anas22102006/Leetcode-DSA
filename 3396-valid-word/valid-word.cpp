class Solution {
public:
    bool isvow(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    bool iscon(char c){
        return (c>='a' && c<='z' && !isvow(c));
    }
    bool isValid(string word) {
        transform(word.begin(),word.end(),word.begin(),::tolower);
        int v=0;
        int c=0;
        bool con =true;
        for(char ch:word){
            if(isalnum(ch)){
                if(isvow(ch)){v++;}
                else if(iscon(ch)){c++;}
            }
            else{
                con=false;
                break;
            }
        }
        return (word.length()>=3 && v>=1 && c>=1 && con);   
    }
};