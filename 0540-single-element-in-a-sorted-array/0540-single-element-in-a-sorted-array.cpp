class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if (n==1) return nums[0];

        // if(nums[0]!=nums[1]) return nums[0];   //if single element is 0th position
        // if(nums[n-1]!= nums[n-2]) return nums[n-1];  //if single element is nth 

        // for(int i=1 ; i<n-1 ;i++){
        //     if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) return nums[i];
        // }

        int st = 0 , end = n-1;

        while(st<=end){
            int mid = st + (end-st)/2;
            
            if(mid==0 && nums[0]!=nums[1]) return nums[0];   //if single element is 0th position
            if(mid==n-1 && nums[n-1]!= nums[n-2]) return nums[n-1];  //if single element is nth position

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]) end = mid-1;
                else st = mid+1;
            }  
            else{
                if(nums[mid]==nums[mid-1]) st = mid+1;
                else end = mid-1;
            }
            
            if(nums[mid]==nums[mid+1]){
                if((mid+1)%2!=0) st = mid+1;
            }
        }
        return -1;
    }
};