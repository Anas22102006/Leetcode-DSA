class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    int totsum=INT_MAX;
    vector<string> res;
    for(int i=0;i<list1.size();i++){
        for(int j=0;j<list2.size();j++){
            if(list1[i] == list2[j]){
                int sum=i+j;
                if(sum<totsum){
                    totsum=sum;
                    res.clear();
                    res.push_back(list1[i]);
                }
                else if(sum==totsum){
                    res.push_back(list1[i]);
                }
            }
        }
    }
    return res;    
    }
};