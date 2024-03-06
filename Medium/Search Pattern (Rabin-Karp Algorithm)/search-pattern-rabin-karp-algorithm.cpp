//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
             vector<int> ans;
            int n = text.length();
            int m = pattern.length();
            if(m>n) return {};
            if(pattern == text) return {1};
            for(int i = 0; i < n-m+1 ; i++){
                string temp = text.substr(i,m);
                if(temp == pattern) ans.push_back(i+1);
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends