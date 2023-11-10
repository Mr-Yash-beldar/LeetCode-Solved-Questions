class Solution {
public:
    int missingNumber(vector<int>& arr) {
    int n=arr.size();
    int totalSum=((n)*(n+1))/2;
    int arraySum=0;
    
    for (int index = 0; index < n; index++)
    {
       arraySum=arr[index]+arraySum;
    }
   return totalSum-arraySum;
    }
};