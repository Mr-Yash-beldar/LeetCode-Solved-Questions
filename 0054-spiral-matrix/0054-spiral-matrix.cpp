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
        for(int i=startingRow;i<=endingCol && count<totalCount;i++){  //go from starting row to ending col
            ans.push_back(matrix[startingRow][i]);
            count++; 
        }
        startingRow++; //increase starting row

        //endingcol
        for(int i=startingRow;i<=endingRow && count<totalCount;i++ ){ //go starting row to ending row
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--; //decrease ending col as to shrink matrix go to left

        //ending row
         for(int i=endingCol;i>=startingCol && count<totalCount;i--){ // go from ending col to starting col
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--; //decrease ending row as to shrink matrix go up spiral
        
         for(int i=endingRow;i>=startingRow && count<totalCount;i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++; //increase string col go to right shrink it spiral

        }
        return ans;

        
        
    }
};