//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int>&stalls,int n,int k,int sol){
        int count=1;
        int pos=stalls[0]; //first cow placed
        for(int i=1;i<n;i++){
            if(stalls[i]-pos>=sol){
                //cow can place move to new cow
                count++;
                pos=stalls[i]; //one cow placed
                
            }
            if(count==k) return true;//all cows are placed
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int start=0,ans=-1;
        int end=stalls[n-1]-stalls[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossible(stalls,n,k,mid)){//ans possible find max go to left
                ans=mid;
                start=mid+1;
            }
            else end=mid-1; //ans at left if min not placed beyond it not possible too
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends