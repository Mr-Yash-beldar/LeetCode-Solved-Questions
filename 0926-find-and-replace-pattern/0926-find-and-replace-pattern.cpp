class Solution {
public:
    void createMapping(string& str) {
        // mapping
        char start = 'a';
        char mapping[300] = {0};
        for (char ch : str) {
            if (mapping[ch] == 0) { // if mapping nto done hence 0
                mapping[ch] = start;
                start++;
            }
        }

        // updating words
        for (int i = 0 ; i < str.size(); i++) {
            char ch = str[i];     // taking each char of string
            str[i] = mapping[ch]; // replace it by mapping of char
        }

        // after this full array of words will be mapped with mapping char
    }
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        vector<string> ans; // ans array
        // find mapping of pattern as need to compare it;
        createMapping(pattern);
        for (string word : words) {
            string tempString =
                word; // as it will change after mapping but we need to store it
                      // in ans hence taking temp
                      createMapping(tempString); ///map string so that compare with mapped pattern
            if(tempString==pattern) ans.push_back(word);  // as if mapping matched then follows pattern store original in ans

        }
        return ans;
    }
};