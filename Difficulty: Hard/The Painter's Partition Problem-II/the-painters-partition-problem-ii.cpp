//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
 bool isPossible(int *arr, int n, int k, long long mid) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + arr[i] <= mid)
                sum += arr[i];
            else {
                k--;
                if (k == 0 || arr[i] > mid)
                    return false;
                sum = arr[i];
            }
        }
        return true;
    }
    long long sum(int *arr, int n) {
        long long ans = 0;
        for (int i = 0; i < n; i++)
            ans += arr[i];
        return ans;
    }
    long long minTime(int arr[], int n, int k) {
        long long low = 0, high = sum(arr, n), mid, ans;
        while (low <= high) {
            mid = (high - low) / 2 + low;
            if (isPossible(arr, n, k, mid)) {
                ans = mid;
                high = mid - 1;
            } 
            else
                low = mid + 1;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends