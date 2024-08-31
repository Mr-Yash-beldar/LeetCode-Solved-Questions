class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int i = 0, j = 0;
        int totalbeams = 0;
        vector<int> beams;
        for (string bankRow : bank) {
            for (auto laser : bankRow) {
                if (laser == '1')
                    i++;
            }

            if (j == 0 && i != 0) {
                j = i;
                i = 0;
            }
            else if(i!=0){
                totalbeams+=i*j;
                j=i;
                i=0;
            }
        
        }
        return totalbeams;
    }
};