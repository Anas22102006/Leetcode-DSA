class Solution {
public:
    bool checkOnesSegment(string s) {
        bool one=false;
        bool zero=false;
        for(char ch:s){
            if(ch=='1'){
                if(zero){
                    return false;
                }
                one=true;
            }
            if(ch=='0' && one){
                zero=true;
            }
        }
        return true;        
    }
};