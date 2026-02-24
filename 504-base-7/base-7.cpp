class Solution {
public:
    string convertToBase7(int num) {
    int n= abs(num);
    string res="";
    if(num==0){res="0";}
    else{
    while(n>0){
        res+= to_string(n%7);
        n/=7;
    }}
    reverse(res.begin(),res.end());
    if(num<0){res='-'+res;}
    return res;   
    }
};