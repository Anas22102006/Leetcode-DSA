class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    vector<int> v;
    for(int i:arr){
        if(v.size()<arr.size()){
            v.push_back(i);
                if(v.size()<arr.size() && i==0){
                    v.push_back(i);
            }
        }
        else{
            break;
        }

    }
    arr=v;   
    }
};