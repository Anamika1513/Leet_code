class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for(int i=0 ; i<n ; i++){

            if (i == n - 1) {
                arr[i] = -1;
                break;
            }
            
            int max = INT_MIN;
            for(int j = i+1 ; j<n ;j++)
            if(arr[j]>max){
               max = arr[j];
            }
            arr[i]=max;
        }
        
        return arr;
    }
};