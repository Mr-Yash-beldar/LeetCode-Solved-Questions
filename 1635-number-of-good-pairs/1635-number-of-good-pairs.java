class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count=0;
        int n=nums.length;
        if(n<=1){
            return count;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
        
    }
}