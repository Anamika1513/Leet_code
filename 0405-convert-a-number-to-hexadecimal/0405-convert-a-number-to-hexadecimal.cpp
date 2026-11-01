
class Solution {
public:
    string toHex(int num) {

        if (num == 0) {
            return "0";
        }

        string hex = "0123456789abcdef";
        string ans = "";

        unsigned int n = (unsigned int)num;

        while (n > 0) {

            int rem = n % 16;

            ans += hex[rem];

            n = n / 16;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
