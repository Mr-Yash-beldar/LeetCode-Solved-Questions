class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)
            return 1;
        int sum=0;
        int leftSum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        for(int i=1;i<=n;i++){
            leftSum+=i;
            if(leftSum*2==sum-(i+1))
                return i+1;
        }
        return -1;

    }
};