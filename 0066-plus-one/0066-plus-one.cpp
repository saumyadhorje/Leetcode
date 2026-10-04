class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Last digit is not 9
        if (digits[n - 1] != 9) {
            digits[n - 1]++;
            return digits;
        }

        // Last digit is 9
        digits[n - 1] = 0;

        // Handle carry
        for (int i = n - 2; i >= 0; i--) {
            if (digits[i] != 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // All digits were 9
        digits.insert(digits.begin(), 1);

        return digits;
    }
};