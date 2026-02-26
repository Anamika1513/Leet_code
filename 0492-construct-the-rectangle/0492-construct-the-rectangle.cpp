// class Solution {
// public:
//     vector<int> constructRectangle(int area) {
//         int n = area/2;

//         for(int i=1 ; i<=n ; i++){
//             int l = i;
//             int w = area/l;
//             if (l*w==area)
//                 return {l , w}; 
           
//         }
//         return {};
//     }
// };
class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        for(int w = sqrt(area); w >= 1; w--) {
            if(area % w == 0) {
                int l = area / w;
                return {l, w};
            }
        }
        
        return {};
    }
};