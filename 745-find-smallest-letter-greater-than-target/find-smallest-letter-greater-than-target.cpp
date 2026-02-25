class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    char c=letters[0];
    for(char ch:letters){
        if(((int)ch - (int)target)>0){
            c=ch;
            break;
        }
    }
    return c;    
    }
};