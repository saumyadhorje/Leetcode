class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0;
       int maxlen=0;
       unordered_set<char> st;
       for(int right=0;right<s.size();right++) {
           while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
             // Add current character
            st.insert(s[right]);

            // Update answer
            maxlen = max(maxlen, right - left + 1);
        
       }
       return maxlen;
    }
};