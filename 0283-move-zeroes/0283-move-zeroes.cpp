class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return;

        // for(int i=0 ; i<n-1 ; i++){ 
        //     for(int j=0 ; j<n-1-i ;j++){
        //         if(nums[j]==0){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }

        int j=0;
        for(int i=0 ; i<n ; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return;
    }
};