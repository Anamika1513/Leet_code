
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            bool found = false;

            // Search in second array
            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }

            // Check whether already present in answer
            if (found == true) {

                bool alreadyPresent = false;

                for (int k = 0; k < ans.size(); k++) {

                    if (ans[k] == nums1[i]) {
                        alreadyPresent = true;
                        break;
                    }
                }

                // Add only if not already present
                if (alreadyPresent == false) {
                    ans.push_back(nums1[i]);
                }
            }
        }

        return ans;
    }
};
