class Solution {
public:

    int expand(string s, int i, int j) {
        int count = 0;
        while (i >= 0 && j < s.length() &&
               s[i] == s[j]) { // if palindrome as same that part is substring
                               // is palindrome
            count++; // add palindrome substring count
            i--;
            j++; // expand move outwards
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount=0;
        for (int center = 0; center < s.length(); center++) {
            // odd substring same position start length 1
           int oddCount = expand(s, center, center);
            // even substring +1 postion start as even substring length 2
           int  evenCount = expand(s, center, center + 1);
           totalCount+=oddCount+evenCount; // after each iteration add even and odd count
        }

        return totalCount; // return total counts
    }
};