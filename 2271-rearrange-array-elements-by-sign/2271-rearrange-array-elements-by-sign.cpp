class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
    int n = arr.size();
    vector<int>ans(n);
    int positive = 0;
    int negative = 1;
    for (int index = 0; index < n; index++)
    {
        if (arr[index] > 0)
        {
            ans[positive]=arr[index];
            positive += 2;
        }
    }
    for (int index = 0; index <n; index++)
    {
        if (arr[index] < 0)
        {
            ans[negative]=arr[index];
            negative += 2;
        }
    }
    return ans;
    }
    
};