class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codes={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(string w:words){
            string dec="";
            for(char ch:w){
                dec+=codes[ch-'a'];
            }
            s.insert(dec);
        }
        if(words.size()==1){return 1;}
        return s.size();
    }
};