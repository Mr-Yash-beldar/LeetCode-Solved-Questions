//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        int n =s.size();
        deque<int>dq;
        for(int i=0 ;i<n;i++){
        
            while(!dq.empty() && s[i]-'0'<dq.back()&& k>0){
               dq.pop_back();
               k--;
               
            }
            dq.push_back(s[i]-'0');
        }
   
//if k>0
        while(k--){
            dq.pop_back();
        }
      
// remaining element add to ans
        string str="";
        bool leadingZero = true;
        
        for(auto x: dq){
            if(x==0 && leadingZero) continue;
            leadingZero = false;
            str+=to_string(x);
        }
        return (str=="")?"0":str; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends