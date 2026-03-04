class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        vector<string> res;
        for(string word:words){
            string w=word;
            transform(w.begin(),w.end(),w.begin(),::tolower);
            string row;
            if(row1.find(w[0])!=string::npos){
                row=row1;
            }
            else if(row2.find(w[0])!=string::npos){
                row=row2;
            }
            else{
                row=row3;
            }
            bool con=true;
            for(char ch:w){
                if(row.find(ch)==string::npos){
                    con=false;
                    break;
                }
            }
            if(con){res.push_back(word);}
        }
        return res;

    }
};