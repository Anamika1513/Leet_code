class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    vector<int> ans;
    if(matrix.empty()) return ans;

    int m = matrix.size();          // rows
    int n = matrix[0].size();       // columns

    int minr=0;
    int maxr = m-1;
    int minc = 0 ;
    int maxc = n-1;

    int tne = m*n ;
    int count = 0 ;

    while(count<tne){
        //print minimum row
        for(int j=minc ; j<=maxc ; j++){
            ans.push_back(matrix[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;

        //print maximum column 
        for(int i=minr ; i<=maxr; i++){
            ans.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;


        //print maximum row
        for(int j=maxc ; j>=minc ;j--){
            ans.push_back(matrix[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;

        //print minimum column 
        for(int i=maxr ; i>=minr ; i--){
            ans.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return ans;
    }
};