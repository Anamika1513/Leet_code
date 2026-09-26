class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long n = nums.size();

        vector <int>result(n ,1);


        // for(int i=0 ; i<n ; i++){
        //     int product = 1 ; 
        //     for(int j=0 ;j<n ; j++){
        //         if(i!=j) product*=nums[j];
        //     }
        //     result[i] = product;
        // }
       
        for(int i=1 ;i<n ;i++){
            result[i] = result[i-1] * nums[i-1];
            // prefix[i] = prefix[i-1]*nums[i-1];
        }

        // suffix product
        // vector <int>suffix(n,1);
        int suffix = 1;
        for(int i=n-2 ;i>=0 ;i--){
            suffix *= nums[i+1];
            result[i]*=suffix;
        }

        //final result
        // for(int i=1 ;i<n ;i++){
        //     result[i] = prefix[i]*suffix[i];
        // }

        return result;
    }
};