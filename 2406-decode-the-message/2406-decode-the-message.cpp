class Solution {
public:
    string decodeMessage(string key, string message) {
        //create mapping
        char start='a';
        string ans;
        char mapping[280]={0}; // as 256 char all insert 0 null
        for(auto ch:key){
            if(ch!=' ' && mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }

        //use mapping
        for(auto ch:message){
            if(ch == ' ') ans.push_back(' ');
            else{
            char decodedChar=mapping[ch];
            ans.push_back(decodedChar);
            }
        }
        return ans;
    }
};