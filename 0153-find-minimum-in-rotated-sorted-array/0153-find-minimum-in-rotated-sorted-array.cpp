class Solution {
public:
    int findMin(vector <int> nums){
        int n = nums.size();
        int min = nums[0];
        
        for(int i=1 ; i<n ; i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return min;
    }
};
    // void merge(vector<int>& nums, int low, int mid, int high) {
    //     vector<int> temp;
    //     int left = low, right = mid+ + 1;

    //     while (left <= mid && right <= high) {
    //         if (nums[left] <= nums[right])
    //             temp.push_back(nums[left++]);
    //         else
    //             temp.push_back(nums[right++]);
    //     }

    //     while (left <= mid)
    //         temp.push_back(nums[left++]);

    //     while (right <= high)
    //         temp.push_back(nums[right++]);

    //     for (int i = low; i <= high; i++)
    //         nums[i] = temp[i - low];
    // }

    // void mergeSort(vector<int>& nums, int low, int high) {
    //     if (low >= high) return;

    //     int mid = (low + high) / 2;
    //     mergeSort(nums, low, mid);
    //     mergeSort(nums, mid + 1, high);
    //     merge(nums, low, mid, high);
    // }

    // vector<int> sortArray(vector<int>& nums) {
    //     mergeSort(nums, 0, nums.size() - 1);
    //     return nums;
    
// };