class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int count = 0;

        for(int i=0 ; i<nums.size() ; i++){
            // if(nums[i]%3==0 && nums[i]%2==0){
            if (nums[i] % 6 == 0) {
                sum+=nums[i];
                count++;
            }
        }


        return count==0?0:sum/count;
    }
};