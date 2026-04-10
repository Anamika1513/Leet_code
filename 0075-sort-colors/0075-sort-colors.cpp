class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();

        // int low = 0 , mid = 0 , high = n-1;

        // for (int i=1 ; i<n ; i++){
        //     if(nums[low]==0 && nums[low]<nums[high]){
        //         swap(nums[low], nums[high]);
        //         high--;
        //     }
        //     else if(nums[low]==nums[high]) {
        //         low++;
        //         high++;
        //     }
        // }
    //    for(int i=0 ; i<n-1 ; i++){
    //     int j=i+1;
    //     while(j>=1 && nums[j]<nums[j-1]){
    //         swap(nums[j],nums[j-1]);
    //             j--;   
    //     }
    // }

    int i=0 , j=0  , k = n-1;
    while(j<=k){
        if(nums[j]==1) j++;
        else if (nums[j]==2) {
            swap(nums[j], nums[k]);
            k--;
        }
        else{
            swap(nums[i],nums[j]);
            i++; j++;
        }
    }
    nums;
    }
};