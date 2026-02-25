class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int op=0;
    for(string s:operations){
        if(s=="X++" || s=="++X"){
            op++;
        }
        else{
            op--;
        }
    }
    return op;    
    }
};