class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
    int a=0;
    string r="";
    for(int i=(s.length()-1);i>=0;i--){
        if(isalnum(s[i])){
            r+=toupper(s[i]);
            a++;
        }
        if(a>=k && i>0){
            r+='-';
            a=0;
        }
    }
    reverse(r.begin(),r.end());
    if(r[0]=='-'){
        r.erase(0,1);
    }
    return r;   
    }
};