class Solution {
public:
    string makeSmallestPalindrome(string s) {
     int n = s.size();
        string ans = s;
        
        int start = 0, end = n - 1;
        
        while(start <= end){
            if(s[start] != s[end]){
                char smaller = min(s[start], s[end]);
                ans[start] = smaller;
                ans[end] = smaller;
            } 
            else {
                ans[start] = s[start];
                ans[end] = s[start];
            }
            
            start++;
            end--;
        }
        return ans;
    }
};