class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

       while(i<n){
            nums[i] = nums[i]*nums[i];
            i++;
        }
       
        sort(nums.begin(),nums.end());
        return nums;
    }
};