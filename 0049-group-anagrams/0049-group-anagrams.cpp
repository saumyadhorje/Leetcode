class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Map:
        // Key   -> Sorted word (Example: "aet")
        // Value -> All words having the same sorted form
        // Example: {"eat", "tea", "ate"}
        unordered_map<string, vector<string>> mp;

        // Traverse every string in the input
        for (int i = 0; i < strs.size(); i++) {

            // Make a copy of the current word
            string key = strs[i];

            // Sort the copied word
            // Example:
            // "eat" -> "aet"
            // "tea" -> "aet"
            sort(key.begin(), key.end());

            // Store the original word in the map
            // If the key already exists, it is added to the same group
            mp[key].push_back(strs[i]);
        }

        // Vector to store the final answer
        vector<vector<string>> ans;

        // Traverse all groups stored in the map
        for (auto x : mp) {

            // Add each group to the answer
            ans.push_back(x.second);
        }

        // Return all grouped anagrams
        return ans;
    }
};