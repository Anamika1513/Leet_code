class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();

       for(int i=0 ; i<n-1 ; i++){
        int j=i+1;
        while(j>=1 && nums[j]<nums[j-1]){
            swap(nums[j],nums[j-1]);
                j--;   
        }
    }
    nums;
    }
};