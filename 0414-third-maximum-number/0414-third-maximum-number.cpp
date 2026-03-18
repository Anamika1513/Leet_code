class Solution {
public:
    int thirdMax(vector<int>& nums) {
        

        // stable_sort(nums.begin(),nums.end());
        // int max , smax , tmax;

        // if(nums[n-1]>nums[n-2]){
        //     max = nums[n-1];
        // }
        // if(nums[n-1]!=nums[n-2] && nums[n-2]>nums[n-3]){
        //         smax = nums[n-2];
        // }
        // if(nums[n-2]!=nums[n-3] && nums[n-2]>nums[n-3]){
        //         tmax = nums[n-2];
        // }

        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n=nums.size();
        if(n<3){ return nums[n-1];}
        else {return nums[n-3];}

        // return tmax;
    }
};