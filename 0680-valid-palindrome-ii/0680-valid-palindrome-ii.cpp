class Solution {
public:
   bool checkPallindrome(string s,int i,int j){
    while(i<=j){
        if(s[i]==s[j]){ //checking first and last if equal move to next char accordingly
            i++;
            j--;
        }
        else return false; // if not equal then its not palindrome
    }
    return true;
   }

    bool validPalindrome(string s) {
        int i=0, j=s.length()-1; 
        bool ans1,ans2; //atmost 1 remove allowed that is 0 or 1, 2 bool for 1st char remove and 2ed for another char remove and check plaindrome resp
        while(i<j){
            if(s[i]==s[j]){ //checking if i and j are equal that means no need to remove  them
                i++;
                j--;
            }
            else{
                // if char are not same need to remove one char but which char should remove
                ans1=checkPallindrome(s,i+1,j); // removed first char as i+1 that is i is neglected i+1 to j
                ans2=checkPallindrome(s,i,j-1); // removed last char as i to j-1 j is neglected 
                return ans1 || ans2; //taking or as if ans1 gives true or ans2 gives true output is true
            }
        }
        return true;  //string is already pallindrome no need to remove anything

    }
};