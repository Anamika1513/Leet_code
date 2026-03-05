class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int> ans;
        for(int x : nums1){
            ans.push_back(x);
        }
        
        for(int x : nums2){
            ans.push_back(x);
        }
        
        sort(ans.begin(),ans.end());
        int a = ans.size();

        if(a%2!=0) return ans[a/2];
        else return (ans[a/2]+ans[a/2-1])/2.0;
       
    }
};