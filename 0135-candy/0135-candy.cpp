class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        vector<int> ans(n,1);

        // for(int i=0 ; i<n ; i++){
        //     int j = i-1 ,k=i+1;

        //     if(i==0){
        //         if(ratings[i]>ratings[i+1]) ans[i] = ratings[i]+1;
        //     }
        //     else if(1<i<n && (ratings[i]>ratings[i-1] || ratings[i]>ratings[i+1])){
        //         ans[i] = ratings[i]+1;
        //     }
        //     else if(i==n && ratings[i]>ratings[i-1] ){
        //         ans[i] = ratings[i]+1;
        //     }
        //     else continue;
        // }
        

        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                ans[i] = ans[i - 1] + 1;
            }
        }

       
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                ans[i] = max(ans[i], ans[i + 1] + 1);
            }
        }

        int sum = 0;

        for(int i=0 ; i<n ; i++){
            sum+=ans[i];
        }

        return sum;
    }
};