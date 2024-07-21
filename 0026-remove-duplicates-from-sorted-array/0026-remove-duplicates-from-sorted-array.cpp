class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int duplicatePlace=0;// place behind which all are unique
        int uniquePlace=1; 
        while(uniquePlace<nums.size()) { //loop untill array
        if(nums[duplicatePlace]==nums[uniquePlace]) uniquePlace++;
        //if element are same keep moving forward  
        else nums[++duplicatePlace]=nums[uniquePlace++]; 
         //duplicate place's behind all are unique increment it and 
        //place unique element at duplicate element place
            
        }
        return duplicatePlace+1; //behind it all are unique hence return unique elements size as +1 as 0 indexing
    }
};