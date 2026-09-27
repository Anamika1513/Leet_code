class Solution {
public:
    int binarySearch(vector<int>& nums, int target,int start,int end){
        if(start<=end){
            int mid = start + (end-start)/2;

            if(target<nums[mid]) return binarySearch(nums , target , start , mid-1);  // first half
            else if(target>nums[mid]) return binarySearch(nums , target , mid+1 , end);  //second half
            else return mid;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        return binarySearch(nums , target , start , end);

    
        // while(start<=end){
        //     int mid = start+(end-start)/2;
        //     if (target == nums[mid]) return mid;
        //     else if (target > nums[mid]) start=mid+1;
        //     else  end=mid-1;
        
        // }


        // for(int i=0 ; i<n ; i++){
        //     if(target == nums[i]){
        //         return i;
        //     }
        // }
        return -1;
    }
};