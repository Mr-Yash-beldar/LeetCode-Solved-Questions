class Solution {
public:

    vector<int> twoPointer(vector<int>& arr, int k, int x) {
        int low=0,high=arr.size()-1;
      
        while(high-low>=k){
            if(abs(x-arr[low])>abs(x-arr[high]))
                low++;
            else
                high--;
        }
          // vector<int> ans;
        // for(int i=low;i<=high;i++){
        //     ans.push_back(arr[i]);
        // }
        return vector<int>(arr.begin()+low,arr.begin()+high+1);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      return twoPointer(arr,k,x);
    }

};