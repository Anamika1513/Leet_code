class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n-1;
        int count = 0;

        // trailing space erase
        while(i>=0 && s[i] == ' '){
            i--;
        }

        //then count the letter until find space
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }

        return count;
    }
};