class Solution {
public:
    int gcdans(int a, int b) {
        if (a == 0)
            return b; 
        if (b == 0)
            return a;
        if (a > b) {
            return gcdans((a - b), b);
        } else {
            return gcdans((b - a), a);
        }
    }
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end()); //find maximum element in array
        int mini = *min_element(nums.begin(), nums.end());  //find minimun element in array
        return gcdans(maxi, mini);
    }
};