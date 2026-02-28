class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    vector<string> words;
    sentence+=" ";
    string word="";
    for(int i=0;i<sentence.length();i++){
        word+=sentence[i];
        if(sentence[i]==' '){
            words.push_back(word);
            word="";
        }
    }
    int l=searchWord.length();
    int pos=-1;
    for(int i=0;i<words.size();i++){
        if(words[i].substr(0,l)==searchWord){
            pos=i+1;
            break;
        }
    }
    return pos;
  
    }
};