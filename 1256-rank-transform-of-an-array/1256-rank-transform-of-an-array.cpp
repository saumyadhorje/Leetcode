class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> temp = arr;

        // Sort the copied array
        sort(temp.begin(), temp.end());

        // Remove duplicate values
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        // Replace each element with its rank
        for (int i = 0; i < arr.size(); i++) {
            int index = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            arr[i] = index + 1;
        }

        return arr;
    }
};