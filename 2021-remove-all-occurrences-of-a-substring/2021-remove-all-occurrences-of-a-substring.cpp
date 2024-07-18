class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){ //if pattern found in string 
            s.erase(s.find(part),part.length());  //remove that pattern it continues untill part is not present
        }
        return s;
    }
};