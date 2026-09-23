class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n ; i++){

            if(i>0 && nums[i]==nums[i-1]) continue; // skips the iteration for the duplicate element

            for(int j=i+1 ; j<n ;){
    
                int r = j+1 , s = n-1;

                while(r<s){
                   long long sum = (long long)nums[i] + nums[j] + nums[r] + nums[s];
                   if(sum<target) r++;
                   else if(sum>target) s--;
                   else{
                    ans.push_back({nums[i],nums[j],nums[r],nums[s]});
                    r++;s--;

                    while(r<s && nums[r]==nums[r-1]) r++;
                   }
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++;
            }
        }
        return ans;
    }
};