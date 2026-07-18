class Solution {
public:
    int findGCD(vector<int>& nums) {

        int mini = INT_MAX;
        int maxi = INT_MIN;

        // Find minimum and maximum
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < mini)
                mini = nums[i];

            if(nums[i] > maxi)
                maxi = nums[i];
        }

        // Find GCD by checking from mini downwards
        for(int i = mini; i >= 1; i--) {
            if(mini % i == 0 && maxi % i == 0)
                return i;
        }

        return 1;
    }
};