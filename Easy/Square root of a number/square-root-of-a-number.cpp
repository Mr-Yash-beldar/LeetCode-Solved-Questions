//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
       long long int start=0,end=x,mid,ans=-1;
       while(start<=end)
       {
           mid=start+(end-start)/2;
           if(mid*mid==x) //is mid is ans
                return mid; 
            else if(mid*mid>x)
                end=mid-1;
            else{
                ans=mid;
                start=mid+1;
            }
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends