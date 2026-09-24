class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(begin(rev),end(rev));

        // for(int i=0 ; i<s.length() ; i++){
        //     if(s.substr(0 , s.length()-i)==rev.substr(i)){     // prefix in s == suffix in rev
        //         return rev.substr(0,i)+s;
        //     }
        // }
        // return rev+s;

        for(int i=0 ; i<s.length() ; i++){
            if(!memcmp(s.c_str() , rev.c_str()+i , s.length()-i)){     // prefix in s == suffix in rev
                return rev.substr(0,i)+s;
            }
        }
        return rev+s;



        // we use memory compare for optimize it

    }
};