
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void solve(int index, vector<int>& nums) {

        if (index == nums.size()) {
            ans.push_back(current);
            return;
        }

        // Choose the current element
        current.push_back(nums[index]);
        solve(index + 1, nums);

        // Undo the choice
        current.pop_back();

        // Skip the current element
        solve(index + 1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(0, nums);
        return ans;
    }
};

   