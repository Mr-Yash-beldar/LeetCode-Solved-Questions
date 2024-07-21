//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    int carry=0; //for carray
    string ans; //ans string
    int i=n-1; //last of array a[] as addition from right to left
    int j=m-1;  //last of array b[] as addition from right to left
    
    while(i>=0 && j>=0){ //untill one of the array add last element of both two
        int sum=a[i]+b[j]+carry; // add with carry as they can genarate carry
        int last=sum%10;  // find unit plcae digit of that number as it can contain 2 digits
        ans.push_back(last+'0');  //add to ans string
        carry=sum/10;  //find carry that is first digit from 2 digit number
        i--; // move left
        j--; //move left
    }
    //when array b[] ends array a[] needs to add in ans with carry
    while(i>=0){
        int sum=a[i]+0+carry; // adding all elements of array a[] with carry as b[] is empty hence 0
        int last=sum%10; // find unit place
        ans.push_back(last+'0'); // add to ans
        carry=sum/10; // if 2 digit number find carry first digit
        i--;  // move left 
    } 
     //when array a[] ends array b[] needs to add in ans with carry
    while(j>=0){
        int sum=0+b[j]+carry; // adding all elements of array b[] with carry as a[] is empty hence 0
        int last=sum%10;   // find unit place
        ans.push_back(last+'0');  // add to ans
        carry=sum/10;  // if 2 digit number find carry first digit
        j--; // move left 
    } 
    
    if(carry>0) ans.push_back(carry+'0');// if carry remaining push to ans
    while(ans.back()=='0') ans.pop_back(); // as zero at back not allowed as it will come in front and should be neglected
    reverse(ans.begin(),ans.end()); // as ans pushed from right to left need to reverse for left to right number 
    return ans; 
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends