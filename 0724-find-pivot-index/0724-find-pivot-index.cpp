class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int i=0 , sum = 0 , leftSum = 0 , rightSum = 0;
        for(int i=0 ; i<n ; i++){
            sum+=nums[i];
        }

        for (int i=0 ; i<n ; i++){
            rightSum = sum - leftSum -nums[i];

            if(leftSum == rightSum){
                return i;
                break;
            }
            leftSum +=nums[i];
        }
        return -1;
    }
};
