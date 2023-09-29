//{ Driver Code Starts
// Initial Template for Java

// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

// Position this line where user code will be pasted.

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out);
        int T = Integer.parseInt(in.readLine());
        while (T-- > 0) {
            String s[] = in.readLine().trim().split(" ");
            int n = Integer.parseInt(s[0]);
            int m = Integer.parseInt(s[1]);
            int a[][] = new int[n][m];
            for (int i = 0; i < n; i++) {
                s = in.readLine().trim().split(" ");
                for (int j = 0; j < m; j++) {
                    a[i][j] = Integer.parseInt(s[j]);
                }
            }
            Solution ob = new Solution();
            out.println(ob.numberOfEnclaves(a));
        }
        out.close();
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {

    int numberOfEnclaves(int[][] grid) {
        // Your code here
        int m=grid.length;
        int n=grid[0].length;
        boolean vis[][]=new boolean[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||i==m-1||j==0||j==n-1){
                    if(grid[i][j]==1&& !vis[i][j]){
                        dfs(i,j,vis,grid);
                    }
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    public void dfs(int i,int j,boolean[][] vis,int[][] grid){
        int[] dr = {-1, 1, 0, 0}; // Possible row directions: up, down, left, right
        int[] dc = {0, 0, -1, 1}; // Possible column directions: up, down, left, right

        vis[i][j] = true;
        grid[i][j]=0;
        // Visit neighbors
        for (int k = 0; k < 4; k++) {
            int r = i + dr[k];
            int c = j + dc[k];
            // Check if the neighbor is within bounds and is a 1
            if (r<grid.length&&r>=0&&c<grid[0].length&&c>=0&&grid[r][c]==1&&vis[r][c]==false) {
                dfs(r,c,vis,grid);
            }
        }
    }
}