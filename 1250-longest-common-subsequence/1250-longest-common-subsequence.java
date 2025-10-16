class Solution {
    static  int[][]  dp;
    public static int solve(String a, String b, int i, int j) {
        // Base case
        if (i >= a.length() || j >= b.length()) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        int ans;
        if (a.charAt(i) == b.charAt(j))
            dp[i][j] = 1 + solve(a, b, i + 1, j + 1);
        else
            dp[i][j] = Math.max(solve(a, b, i + 1, j), solve(a, b, i, j + 1));

        return dp[i][j];
    }

    public int longestCommonSubsequence(String text1, String text2) {
        int n=text1.length();
        int m=text2.length();
       

        dp=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=-1;
            }
        }
         return solve(text1, text2, 0, 0);

    }
}
