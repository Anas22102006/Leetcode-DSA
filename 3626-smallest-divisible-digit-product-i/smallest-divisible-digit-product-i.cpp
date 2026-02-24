class Solution {
public:
    int prod(int n){
        int pro=1;
        while(n>0){
            pro*=n%10;
            n/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        int res;
        int start=n;
        while(true){
            if(prod(start)%t==0){
                res=start;
                break;
            }
            else{
                start++;
            }
        }
        return res;
    }
};