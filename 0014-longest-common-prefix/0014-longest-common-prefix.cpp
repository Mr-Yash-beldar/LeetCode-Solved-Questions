class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        bool ismatched=true;
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(ch!=strs[j][i]){
                    ismatched=false;
                    break;
                }
            }
            if(!ismatched) return ans;
            else ans.push_back(ch);
        }
        return ans;
    }
};