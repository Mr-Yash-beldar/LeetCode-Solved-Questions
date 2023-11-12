//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int nums[], int N, int K) 
    { 
        int start=0;
        int end=N-1;
        int mid;
        if(N==1&&nums[0]==K) return 0;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==K)
                return 1;
                //element is found
            else if(nums[mid]>K)
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


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends