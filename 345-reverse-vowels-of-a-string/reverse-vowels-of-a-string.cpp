class Solution {
public:
    bool isvow(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string reverseVowels(string s) {
    int start=0;
    int stop= s.length()-1;
    while(start<stop){
        if(isvow(s[start]) && isvow(s[stop])){
            char temp=s[start];
            s[start]=s[stop];
            s[stop]=temp;
            start++;
            stop--;
        }
        else if(isvow(s[start]) && !isvow(s[stop])){
            stop--;
        }
        else{
            start++;
        }
    }
    return s;
    }
};