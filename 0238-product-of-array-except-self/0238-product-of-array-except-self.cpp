class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        // left[i] = product of all elements before i
        vector<int> left(n);

        // right[i] = product of all elements after i
        vector<int> right(n);

        // answer array
        vector<int> ans(n);

        // First element has nothing on the left
        left[0] = 1;

        // Fill left array
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Last element has nothing on the right
        right[n - 1] = 1;

        // Fill right array
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // Multiply left and right products
        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};