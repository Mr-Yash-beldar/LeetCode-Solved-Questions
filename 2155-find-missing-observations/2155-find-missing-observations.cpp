class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>ans;
        int m=rolls.size();
        int total=mean*(m+n);
        int rollsTotal=accumulate(rolls.begin(),rolls.end(),0);
        int remain=total-rollsTotal;
        if(remain<n || remain>6*n) return ans;
        int everyadd=remain/n;
        int extra=remain%n;
        for(int i=0;i<n;i++){
            ans.push_back(everyadd);
        }
        for(int i=0;i<extra;i++){
            ans[i]++;
        }
        return ans;

    }
};