class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
        for(char ch:s){
            v[ch-'a']++;
        }
        int pos=-1;
        for(int i=0;i<s.length();i++){
            if(v[s[i]-'a']==1){
                pos=i;
                break;
            }
        }
        return pos;    
    }
};