class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        // vector<int> ans;
        int s = nums.size();


        for(int i=0 ; i<s ; i++){
            if(nums[i]!=val){
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};