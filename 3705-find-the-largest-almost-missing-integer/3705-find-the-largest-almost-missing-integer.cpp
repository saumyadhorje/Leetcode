class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();
        int freq[51] = {0};

        // Count how many times each number appears
        for(int x : nums)
            freq[x]++;

        int ans = -1;

        for(int i = 0; i < n; i++) {

            // If k == n, there is only one subarray
            // So every number is almost missing
            if(k == n) {
                ans = max(ans, nums[i]);
            }

            // Otherwise, number should appear only once
            else if(freq[nums[i]] == 1) {

                // If k == 1, every element is its own subarray
                if(k == 1)
                    ans = max(ans, nums[i]);

                // For k > 1, only first or last element
                // can appear in exactly one subarray
                else if(i == 0 || i == n - 1)
                    ans = max(ans, nums[i]);
            }
        }

        return ans;
    }
};