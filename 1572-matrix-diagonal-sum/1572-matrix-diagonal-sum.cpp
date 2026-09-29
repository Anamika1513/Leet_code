class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int sum = 0;

        // for(int i=0 ;i<n ;i++){
        //     for(int j=0 ;j<m ;j++){
        //         if(i==j || i+j == n-1) {
        //             sum += mat[i][j];
        //         }
        //     }
        // }

        if(n==1 && m==1) return mat[n-1][m-1];

        for(int i=0 ;i<n ;i++){
            sum += mat[i][i];
            sum += mat[i][n-i-1];
        }

        if(n%2==1) sum -= mat[n/2][n/2];

        return sum;
    }
};