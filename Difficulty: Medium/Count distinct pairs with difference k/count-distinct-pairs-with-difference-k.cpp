//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	  int binarySearch(vector<int>&nums,int start,int target){
	        int mid,n=nums.size()-1;
	        while(start<=n){
	            mid=start+(n-start)/2;
	            if(nums[mid]==target)
	                return 1;
	            else if(nums[mid]>target)
	                n=mid-1;
	            else
	             start=mid+1;
	        }
	        return 0;
	    }
	    int TotalPairs(vector<int>nums, int k){
	    sort(nums.begin(),nums.end());
	    set<pair<int,int>>ans;
	    for(int i=0;i<nums.size();i++){
	        if(binarySearch(nums,i+1,nums[i]+k))
	            ans.insert({nums[i],nums[i]+k});
	    }
	    return ans.size();
	    
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends