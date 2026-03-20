class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pr = 1;
        int ans = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            pr = 1;
            for(int j=i ; j<n ; j++){
                pr*=nums[j];
                ans= max(ans, pr);
            }
        }
        return ans;
    }
};