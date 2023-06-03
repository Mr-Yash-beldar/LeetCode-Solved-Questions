class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = Arrays.stream(candies).max().getAsInt();
         List<Boolean> ans = new ArrayList<>();
        for(int i=0;i<candies.length;i++)
        {
            ans.add(candies[i]+extraCandies>=max);
        }
        return ans;
    }
}