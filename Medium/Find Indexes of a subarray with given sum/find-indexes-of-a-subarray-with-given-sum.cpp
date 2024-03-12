//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i=0,j=0;
        long long sum=arr[0];
        // consider first element sum so by sliding we can find subarrays
        while(i<n&&j<n){ //loop goes untill we descovred all subarrys
            if(sum<s){
                sum+=arr[++j];
            }
            else if(sum>s){
                sum-=arr[i++];
                if(j<i){
                    j=i;
                    sum=arr[i];
                }
            }
            else    
                return {i+1,j+1};
            
        }
     return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends