class Solution {
public:
    int sumDig(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
    int res=-1;
    for(int i=0;i<nums.size();i++){
        if(sumDig(nums[i])==i){
            res=i;
            break;
        }
    }
    return res;    
    }
};