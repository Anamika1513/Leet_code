class Solution {
public:
    int majorityElement(vector<int>& arr) {
       int n = arr.size(); 
    //    for(int i=0 ; i<n ; i++){
    //         int count=1;
    //         for(int j=i+1 ; j<n ; j++){
    //             if(arr[i]==arr[j]) count++;
    //         }
    //         if(count>n/2) return arr[i];
    //    }
    //    return -1;
    // sort(arr.begin(),arr.end());

    // int freq = 1, ans=arr[0];

    // for(int i=1 ; i<n ; i++){
    //     if(arr[i]==arr[i-1]){
    //         freq++;
    //     }
    //     else{
    //         freq = 1;
    //         ans = arr[i];
    //     }
    //     if(freq>n/2){
    //         return ans;
    //     }

        int freq = 0 , ans = 0;

        for(int i = 0 ; i<n ; i++){

            if(freq==0) ans = arr[i];

            if(arr[i]==ans) freq++;
            
            else freq--;
        }
    // }

    
    return ans;
    }
};

