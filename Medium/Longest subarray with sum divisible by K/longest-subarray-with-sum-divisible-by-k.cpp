//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k){
	    vector<int> presum_mod(n);
	    int sum = 0, res = 0;
	    vector<int> dp(k, -1);
	    for(int i = 0;i<n;i++){
	        sum += arr[i];
	        presum_mod[i] = sum%k;
	        if(presum_mod[i]<0){
	            presum_mod[i] +=k;
	        }
	        if(presum_mod[i]==0){
                res = max(res, i+1);    
	        }
	        if(dp[presum_mod[i]]==-1){
	            dp[presum_mod[i]] = i;
	        }
	        else{
                res = max(res, i-dp[presum_mod[i]]);
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends