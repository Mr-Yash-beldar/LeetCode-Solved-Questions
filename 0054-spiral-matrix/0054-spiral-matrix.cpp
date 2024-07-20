class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        int totalCount=row*col;
        int count=0;
        //starting row
        while(count<totalCount){
        for(int i=startingRow;i<=endingCol && count<totalCount;i++){
            ans.push_back(matrix[startingRow][i]);
            count++; 
        }
        startingRow++;

        //endingcol
        for(int i=startingRow;i<=endingRow && count<totalCount;i++ ){
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        //ending row
         for(int i=endingCol;i>=startingCol && count<totalCount;i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        
         for(int i=endingRow;i>=startingRow && count<totalCount;i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
        if(count==totalCount){
            return ans;
        }
        }
        return ans;

        
        
    }
};