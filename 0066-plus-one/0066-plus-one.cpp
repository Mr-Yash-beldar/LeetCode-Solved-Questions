class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> result;
        int carry = 0, sum;
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) { // if its last element as addition starts from
                sum = digits[i] + 1; // add one to last element
                result.push_back(sum % 10); // find its last element after adding 1 
                carry = sum / 10; //if its 2 digit it generates carray then it should be add in another digit too
            } else {
                sum = digits[i] + carry; //now add that carry in another element
                result.push_back(sum % 10); //same find last element
                carry = sum / 10; //check carry reapet
            }
        }
        if (carry) //at last if carry still present add it at last 
            result.push_back(carry); //added
        reverse(result.begin(), result.end()); //now we have insert last to first hence reverse for front to last sequence
        return result; 
    }
};