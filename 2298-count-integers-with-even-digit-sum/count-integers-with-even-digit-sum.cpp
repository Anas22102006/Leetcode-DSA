class Solution {
public:
    bool deven(int num){
        int s=0;
        while(num>0){
            s+=num%10;
            num/=10;
        }
        return (s%2==0);
    }
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(deven(i)){count++;}
        }
        return count;
    }
};