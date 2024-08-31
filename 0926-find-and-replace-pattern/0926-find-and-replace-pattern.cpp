class Solution {
public:
    void mapping(string& str){ //by reference to change orginal
        char mapping[256]={0};
        char start='a';
        for(auto ch:str){
            mapping[ch]=start;
            start++;
        }
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            str[i]=mapping[ch]; //mapped original str
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        //create mappping for pattern
        mapping(pattern);

        //access each and create mapping for all
        for(string s:words){
            string tempstring=s; // use it for modify
            mapping(tempstring); //mapped it
            if(tempstring==pattern) {
                //if matched that is it is valid ans as original should be return and which is s
                ans.push_back(s); //store it
            }

        }
        return ans;
    }
};