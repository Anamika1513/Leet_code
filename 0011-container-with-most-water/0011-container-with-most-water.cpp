class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0 , r = n-1;
        int MW = 0;

        while(l<r){
            int w = r-l;
            int h = min(height[l], height[r]);
            int area = w*h;

            MW = max(area , MW);

            height[l]<height[r] ? l++ : r-- ;
        }

        return MW;
    }
};