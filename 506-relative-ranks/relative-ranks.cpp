
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({score[i], i});
        }

        sort(arr.begin(), arr.end(), greater<pair<int, int>>());

        vector<string> ans(n);

        for (int i = 0; i < n; i++) {

            int index = arr[i].second;

            if (i == 0) {
                ans[index] = "Gold Medal";
            }
            else if (i == 1) {
                ans[index] = "Silver Medal";
            }
            else if (i == 2) {
                ans[index] = "Bronze Medal";
            }
            else {
                ans[index] = to_string(i + 1);
            }
        }

        return ans;
    }
};
