class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowsum=0;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        int maxsum=windowsum;
        for(int i=k;i<nums.size();i++){
            windowsum= windowsum - nums[i-k] + nums[i];
            maxsum= max(maxsum,windowsum);
        }
        return maxsum/(double)k;    
    }
};