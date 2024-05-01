class Solution {
public:
    string reversePrefix(string word, char ch) {
        int c=0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                c=i;
                break;
            }
        }
        string stt=word.substr(0,c+1);
        reverse(stt.begin(),stt.end());
        stt=stt+word.substr(c+1,word.length());
        return stt;
    }
};