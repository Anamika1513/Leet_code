class Solution {
public:
    bool isPalindrome(int x) {
        int c=x , n ;
        long long rev=0;
        while(x>0){
            n = x%10;
            rev = (rev*10)+n;
            x/=10;
        }
        if(rev==c)
            return true;
        else
            return false;
    }
};