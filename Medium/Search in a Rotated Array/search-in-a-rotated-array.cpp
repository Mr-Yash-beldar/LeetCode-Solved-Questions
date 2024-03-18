//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int pivotIndex=findPivotIndex(A,h+1);
        if(A[0]<=key&&key<=A[pivotIndex])
            return binarySearch(A,0,pivotIndex,key);
        else
            return binarySearch(A,pivotIndex+1,h,key);
    }
    int findPivotIndex(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (start == end)
            return start;
        else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
            return mid - 1;
        else if (mid + 1 <= n - 1 && arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[0] <= arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int binarySearch(int arr[], int start, int end, int target)
{
    int mid;
    while (start <= end)
    {
        mid=start+(end-start)/2; //mid updation
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid-1;
        else
            start = mid + 1;
    }
    return -1;
}

};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends