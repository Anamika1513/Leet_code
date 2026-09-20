class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;

        for(int i=0 ; i<n ; i++){
            int revValue = 'z'-s[i]+1;
            ans += revValue *(i+1);
        }
        
        return ans;
    }
};