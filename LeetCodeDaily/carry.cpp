class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        
        for (int i = digits.size() - 1; i >= 0; i--) {
            int currentSum = digits[i] + carry;
            digits[i] = currentSum % 10;
            carry = currentSum / 10;
        }

        if (carry) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};
