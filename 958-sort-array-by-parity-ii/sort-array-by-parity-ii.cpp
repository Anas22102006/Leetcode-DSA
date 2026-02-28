class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    int even=0;
    int odd=1;
    while(even<nums.size() && odd<nums.size()){
        if(nums[even]%2==0){
            even+=2;
        }
        if(nums[odd]%2!=0){
            odd+=2;
        }
        else if(nums[even]%2!=0 && nums[odd]%2==0){
            int temp=nums[even];
            nums[even]=nums[odd];
            nums[odd]=temp;
            odd+=2;
            even+=2;
        }
    }
    return nums;    
    }
};