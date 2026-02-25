class Solution {
public:
    bool countprime(int n){
        int count=0;
        while(n){
            n= n& (n-1);
            count++;
        }
        int flag=0;
        for(int i=1;i<count;i++){
            if(count%i==0){
                flag++;
            }
        }
        return (flag==1);
    }
    int countPrimeSetBits(int left, int right) {
        int res=0;
        for(int i=left; i<=right;i++){
            if(countprime(i)){
                res++;
            }
        }
        return res;
    }
};