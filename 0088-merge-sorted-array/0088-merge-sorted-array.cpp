class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector <int> ans;

        // for(int i=0 ; i<m ; i++){
        //     ans.push_back(nums1[i]);
        // }
        // for(int i=0 ; i<n ; i++){
        //     ans.push_back(nums2[i]);
        // }
        // sort(ans.begin(),ans.end());

        // for (int i = 0; i < m + n; i++) {
        //     nums1[i] = ans[i];
        // }

        int i = m-1 ;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--; 
            }
            k--;
        }
        while(j>=0){
                nums1[k] = nums2[j];
                j--; k--;
        }
    }
};