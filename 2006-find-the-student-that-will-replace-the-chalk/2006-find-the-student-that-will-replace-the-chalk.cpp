class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        k%=accumulate(begin(chalk), end(chalk), 0l); // as by removing all the will be remaining now that is need to traverse only once
        // while travling once remove each chalk[i] and check wheather new chalk needed or not
        for(int i=0;i<n;i++){
            if((k-=chalk[i])<0) return i; // when chalk finished other will replace
        }
        return 0; //that is all students with rounds finished
    }
};