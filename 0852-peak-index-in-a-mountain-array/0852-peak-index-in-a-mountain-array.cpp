class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        // for(int i=1 ; i<n-1 ; i++){
        //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return i;
        // }
        // return -1;

        int st = 1 , end = n-2;
        while(st<=end){
            int mid = st + (end-st)/2;

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;

            if(arr[mid]>arr[mid-1] ) st = mid+1;

            else end = mid-1;
        }
        return -1;
    }
};