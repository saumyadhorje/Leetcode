class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            int count = 0;   // RESET for every i

            for (int j = i + 1; j < nums.size(); j++) {

                if ((nums[i] % 2) != (nums[j] % 2)) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};