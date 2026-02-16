
class Solution {
public:

    vector<int> sortArrayByParity(vector<int>& num) {
        int left = 0;
        int right = num.size()-1;

        while(left<right){

            if(num[left]%2 >num[right]%2){
                swap(num[left],num[right]);
            }

            if(num[left]%2 ==0) left++;
            if(num[right]%2 ==1) right--;
        }

    return num;
    }

};