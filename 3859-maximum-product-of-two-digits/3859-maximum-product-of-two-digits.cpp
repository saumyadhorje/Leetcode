class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
         int ans = 0;
//This loop extracts the digits one by one.
        while (n) {
            digits.push_back(n % 10);
            n /= 10;
        }
       

        for (int i = 0; i < digits.size(); i++) {
            for (int j = i + 1; j < digits.size(); j++) {

                // Try every pair of digits.
                ans = max(ans, digits[i] * digits[j]);
            }
        }

        return ans;
    }
};