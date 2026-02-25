class Solution {
public:
    int countbits(int n){
        int count=0;
        while(n){
            n= n & (n-1);
            count++;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
    vector<pair<int ,int>> v;
    for(int i:arr){
        v.push_back({countbits(i),i});
    }
    sort(v.begin(),v.end());
    vector<int> res;
    for(auto p: v){
        res.push_back(p.second);
    }   
    return res;
    }
};