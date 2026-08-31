class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1)
            return 1;

        int maxVal = INT_MIN;
        int minVal = INT_MAX;

        int maxIndex = 0;
        int minIndex = 0;

        // Find minimum and maximum and their positions
        for(int i = 0; i < n; i++) {
            
            if(nums[i] > maxVal) {
                maxVal = nums[i];
                maxIndex = i;
            }

            if(nums[i] < minVal) {
                minVal = nums[i];
                minIndex = i;
            }
        }

        // Make minIndex the smaller index
        if(minIndex > maxIndex) {
            swap(minIndex, maxIndex);
        }

        // Option 1: delete both from front
        int front = maxIndex + 1;

        // Option 2: delete both from back
        int rear = n - minIndex;

        // Option 3: smaller one from front, larger one from back
        int both = (minIndex + 1) + (n - maxIndex);

        return min({front, rear, both});
    }
};