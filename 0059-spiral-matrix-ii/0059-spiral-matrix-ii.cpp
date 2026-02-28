class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

    vector<vector<int>> matrix(n, vector<int>(n));
   
    int minr=0;
    int maxr = n-1;
    int minc = 0 ;
    int maxc = n-1;

    int tne = n*n ;
    int count = 0 ;
    int num=1;


    while(count<tne){
        //print minimum row
        for(int j=minc ; j<=maxc ; j++){
            matrix[minr][j] = num++;
            count++;
        }
        minr++;
        if(count>=tne) break;

        //print maximum column 
        for(int i=minr ; i<=maxr; i++){
            matrix[i][maxc] = num++;
             count++;
        }
        maxc--;
        if(count>=tne) break;


        //print maximum row
        for(int j=maxc ; j>=minc ;j--){
            matrix[maxr][j] = num++;
             count++;
        }
        maxr--;
        if(count>=tne) break;

        //print minimum column 
        for(int i=maxr ; i>=minr ; i--){
            matrix[i][minc] = num++;
             count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return matrix;
    }
};