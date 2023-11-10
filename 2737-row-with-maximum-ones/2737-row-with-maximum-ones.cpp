class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    vector<int> arr;
    int rowNumber = 0;
    int onesCount = INT_MIN;
    int newIndex;
    for (int row = 0; row < mat.size(); row++)
    {
        int count = 0;
        for (int col = 0; col < mat[row].size(); col++)
        {
            if (mat[row][col] == 1)
                count++;
        }
        if (count > onesCount)
        {
            onesCount = count;
            rowNumber = row;
        }
    }
    arr.push_back(rowNumber);
    arr.push_back(onesCount);
    return arr;
    }
};