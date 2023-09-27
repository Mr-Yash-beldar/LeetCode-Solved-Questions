//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String a[] = in.readLine().trim().split("\\s+");
            int N = Integer.parseInt(a[0]);
            int S = Integer.parseInt(a[1]);
            
            Solution ob = new Solution();
            System.out.println(ob.findLargest(N, S));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
     static String findLargest(int N, int S){
        
        String ans="";
        if(S>(N*9)){
           ans="-1";
           return ans;
         
        }
        if(S==0 && N>1)
        return "-1";
        for(int i=9;i>=0;i--){
            
            if(S==0||ans.length()==N)
            break;
            
            if(S>=i){
                int k=S/i;
                for(int l=0;l<k;l++){
                  ans+=String.valueOf(i);
                  S=S-i;
                }
             
            }
           
        }
        while(ans.length()<N){
            ans+="0";
        }
        return ans;
        
    }
}