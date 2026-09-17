class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0 , j = n-1;
        int maxWater = 0;

        while(i<j){
            int h = j-i;
            int conWater;

            if(height[i]<height[j]) {
                conWater = h*height[i];
                i++;
            }

            else {
                conWater = h*height[j];
                j--;
            }

            maxWater = max(conWater , maxWater);
        }
        return maxWater;
    }
};