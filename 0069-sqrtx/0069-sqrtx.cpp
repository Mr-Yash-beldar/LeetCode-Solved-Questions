class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        int start=0,end=x,ans=-1;
        while(start<=end){
            long mid=start+(end-start)/2;
            if(mid*mid==x){
               return mid;
            }
            else if(mid*mid<=x){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};