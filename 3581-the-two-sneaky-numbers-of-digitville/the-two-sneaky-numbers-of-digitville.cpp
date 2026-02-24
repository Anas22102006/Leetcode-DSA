class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        vector<int> res;
        for(int i:v){
            if(count(nums.begin(),nums.end(),i)==2){
                res.push_back(i);
            }
        }
        return res;  
    }
};