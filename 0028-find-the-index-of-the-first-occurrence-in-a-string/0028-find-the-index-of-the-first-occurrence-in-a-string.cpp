class Solution {
public:
    int strStr(string s, string t) {
        int n = s.length();
        int m = t.length();

        if (m == 0) return 0;

        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            while (j < m && s[i + j] == t[j]) {
                j++;
            }

            if (j == m) {
                return i;
            }
        }
        return -1;
    }
};