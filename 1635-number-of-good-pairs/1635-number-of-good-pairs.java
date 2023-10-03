class Solution {
    public int numIdenticalPairs(int[] nums) {
        Map<Integer, List<Integer>> map = new HashMap();
        for(int i = 0; i< nums.length; i++){
            if (!map.containsKey(nums[i]))
                map.put(nums[i], new ArrayList<Integer>());
            map.get(nums[i]).add(i);
        }
        int result = 0;
        for(Map.Entry<Integer, List<Integer>> entry: map.entrySet()){
            Integer key = entry.getKey();
            List<Integer> list= entry.getValue();
            if (list.size()>1){
                result+= (list.size()*(list.size()-1))/2;
            }
        }
        return result;
        
    }
}