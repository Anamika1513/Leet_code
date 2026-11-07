
class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int n = nums.size();
        int i = 1;
 
        while (i < n && nums[i] > nums[i - 1]) {
            i++;
        }

        if (i == 1) return false;

        int peak = i;

        while (i < n && nums[i] < nums[i - 1]) {
            i++;
        }

        if (i == peak) return false;

        int valley = i;

        while (i < n && nums[i] > nums[i - 1]) {
            i++;
        }

        if (i == valley) return false;

        return i == n;
    }
};
