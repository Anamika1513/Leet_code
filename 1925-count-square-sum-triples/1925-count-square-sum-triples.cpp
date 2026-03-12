class Solution {
public:
    int countTriples(int n) {
       int ans = 0;
        for(int a = 1; a <= n; a++){
            for(int b = 1; b <= n; b++){
                int s = a*a + b*b;
                int c = (int) sqrt(s);
                if(c <= n && c*c == s) {
                    ans++;
                }
            }
        }
        return ans; 
    }
};