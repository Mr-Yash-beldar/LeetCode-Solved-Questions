class Solution {
public:
    void rotate(vector<int>& arr, int k) {
    vector<int> ans(arr.size());
    int newIndex;
    for (int index = 0; index < arr.size(); index++)
    {
        newIndex = (index + k) % arr.size();
        ans[newIndex] = arr[index];
    }
   arr=ans;
}

};