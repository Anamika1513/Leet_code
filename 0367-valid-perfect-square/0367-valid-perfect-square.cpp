class Solution {
public:
    bool isPerfectSquare(int num) {
        int ps = sqrt(num);
        return ps*ps==num;
    }
};