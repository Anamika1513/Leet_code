class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> trans(m , vector<int>(n));

        //transpose
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                trans[j][i]=matrix[i][j];
            }
        }

        //rotate
        for(int i=0 ; i<m ; i++){
            int j=0;
            int k =n-1;
            while(j<k){
                swap(trans[i][j],trans[i][k]);
                j++;
                k--;
            }
        }
        matrix = trans;
    }
};