
class Solution {
    public boolean checkStraightLine(int[][] c) {
        // First pair of point (x0, y0)
        int x0 = c[0][0];
        int y0 = c[0][1];

        // Second pair of point (x1, y1)
        int x1 = c[1][0];
        int y1 = c[1][1];

        int dx = x1 - x0, dy = y1 - y0;
        
        
         // Loop to iterate over the points
        for (int i = 0; i < c.length; i++) {
            int x = c[i][0], y = c[i][1];
            if (dx * (y - y1) != dy * (x - x1)){
                return false;
            }
        }
        return true;
    }
}
