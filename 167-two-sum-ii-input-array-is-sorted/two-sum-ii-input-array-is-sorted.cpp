class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int left=0;
    int right= numbers.size()-1;
    vector<int> ans;
    while(left<right){
        int sum=numbers[left]+ numbers[right];
        if(sum==target){
            ans={left+1,right+1};
            break;
        }
        else if(sum>target){
            right--;
        }
        else if(sum<target){
            left++;
        }
    }
    return ans;  
    }
};