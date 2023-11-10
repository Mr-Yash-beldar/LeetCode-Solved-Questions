class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        int right=n-1;
        for (int index = 0; index <=right;)
        {
            if (arr[index]==0)
            {
                swap(arr[left], arr[index]);
                left++;
                index++;
            }
            else if(arr[index]==2)
            {
                swap(arr[right], arr[index]);
                right--;
            }
            else 
            {
                index++;
            }
        }
    }
};