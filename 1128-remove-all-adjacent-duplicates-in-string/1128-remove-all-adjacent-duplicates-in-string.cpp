class Solution {
public:
    string removeDuplicates(string s) {
        string ans=""; //empty string ans is stored here
        for(int i=0;i<s.length();i++){
            if(ans.empty()){ //if string is empty then pushing char in it and continue
                ans.push_back(s[i]);  
                continue;}
            if(ans.back()==s[i]) // if last char that is pushed is same as current string char that means they are adjacent charecter which are same then 
                ans.pop_back(); //remove that char from ans i.e last charecter
            else ans.push_back(s[i]); 
        }
        return ans;
    }
};