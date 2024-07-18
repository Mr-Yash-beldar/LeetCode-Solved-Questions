class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(ans.empty()){
                ans.push_back(s[i]);
                continue;}
            if(ans.back()!=s[i])
                ans.push_back(s[i]);
            else ans.pop_back();
        }
        return ans;
    }
};