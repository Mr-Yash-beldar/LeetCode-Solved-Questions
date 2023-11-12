class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
          int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
                //element is found
            else if(nums[mid]>target)
                end=mid-1;
                //go to left side for searching
            else
                start=mid+1;
                //go to right side for searching the element  
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
                //element is found
            else if(nums[mid]>target)
                end=mid-1;
                //go to left side for searching
            else
                start=mid+1;
                //go to right side for searching the element  
        }
        return -1;

    }
};