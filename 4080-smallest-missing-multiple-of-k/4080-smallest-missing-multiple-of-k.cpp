class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>res;

        for(int i=0;i<nums.size();i++) {
            if(nums[i]%k==0)
                res.push_back(nums[i]);
        }

        int x=k;

        while(true) {
            bool found=false;

            for(int i=0;i<res.size();i++) {
                if(res[i]==x)
                    found=true;
            }

            if(!found)
                return x;

            x+=k;
        }
    }
};