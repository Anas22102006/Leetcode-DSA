class Solution {
public:
    int scoreOfString(string s) {
    vector<int> v;
    for(char ch:s){
        v.push_back((int)ch);
    }
    int sum=0;
    for(int i=0;i<v.size()-1;i++){
        sum+= abs(v[i] - v[i+1]);
    }
    return sum;
    }
};