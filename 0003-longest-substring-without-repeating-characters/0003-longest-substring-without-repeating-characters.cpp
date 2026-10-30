
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int i = 0;
        int maxi = 0;

        for (int j = 0; j < s.length(); j++) {

            while (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            }

            st.insert(s[j]);

            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};
