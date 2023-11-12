//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int nums[], int n, int k) {
        int start=0;
        int end=n-1;
        int mid;
        if(n==1&&nums[0]==k) return 0;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==k)
                return mid;
                //element is found
            else if(nums[mid]>k)
                end=mid-1;
                //go to left side for searching
            else
                start=mid+1;
                //go to right side for searching the element  
        }
        return -1;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends