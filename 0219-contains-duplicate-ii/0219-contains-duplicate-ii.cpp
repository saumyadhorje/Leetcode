class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        for(int i=0;i<nums.size();i++){
          // If the number has appeared before
            if(mp.count(nums[i])) {

                // Check if the current index and previous index are within k
                if(i - mp[nums[i]] <= k)
                    return true;
            }

            // Store/update the latest index of this number
            mp[nums[i]] = i;
        }

        return false;
    }
};