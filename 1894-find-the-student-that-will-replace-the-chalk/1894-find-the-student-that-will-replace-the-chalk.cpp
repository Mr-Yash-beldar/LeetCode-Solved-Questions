class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        k=k%=accumulate(begin(chalk), end(chalk), 0l);
    
        for(int i=0;i<n;i++){
            if((k-=chalk[i])<0) return i;
        }
        return 0;
    }
};