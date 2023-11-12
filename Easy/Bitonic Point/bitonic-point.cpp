//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
         int start = 0;
        int end = n-1;
        
        int mid = (start + end) / 2;
        
        while(start < end){
            if(mid == 0){
                return (arr[0] > arr[1]) ? arr[0] : arr[1];
            }
            if((arr[mid-1] < arr[mid]) && (arr[mid] >= arr[mid+1])){
                break;
            }
            else if((arr[mid-1] < arr[mid])){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = (start + end) / 2;
        }
        
        return arr[mid];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends