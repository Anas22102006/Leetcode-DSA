class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int rep= nums.size()/2;
        int ans;
        for(int i:nums){
            if(count(nums.begin(),nums.end(),i)==rep){
                ans=i;
                break;
            }
        }
        return ans;    
    }
};