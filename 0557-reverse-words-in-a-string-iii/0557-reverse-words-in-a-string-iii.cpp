class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        int st = 0;

        for(int i=0 ; i<=n ; i++){
            if(i==n || s[i]==' '){
                int left = st;
                int right = i-1;

                while(left < right){
                    swap(s[left],s[right]);
                    left++;
                    right--;
                }
                st = i+1;
            }
        }
        
        return s;
    }
};