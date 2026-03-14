// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         while(num1&&num2<INT_MAX && NUM1&&NUM>INT_MIN){
//         long a = stoi(num1);
//         long b = stoi(num2);
//         long c = a+b;
//         string str = to_string(c);
//         }

//         return str;
//     }
// };

// class Solution {
// public:
//     string addStrings(string num1, string num2) {
//         long long a = stoll(num1);
//         long long b = stoll(num2);
//         long long c = a + b;

//         return to_string(c);
//     }
// };

class Solution {
public:
    string addStrings(string num1, string num2) {

        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string str = "";

        while(i >= 0 || j >= 0 || carry) {

            int a = (i >= 0) ? num1[i] - '0' : 0;
            int b = (j >= 0) ? num2[j] - '0' : 0;

            int c = a + b + carry;

            str += (c % 10) + '0';
            carry = c / 10;

            i--;
            j--;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};

