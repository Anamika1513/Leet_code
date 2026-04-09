class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length());

        vector<int> lastS(256,-1);
        vector<int> lastT(256, -1);

        for(int i=0 ; i<s.length() ; i++){
            
            if(lastS[s[i]]!=lastT[t[i]]) return false;

            lastS[s[i]] = i;
            lastT[t[i]] = i;
        }
        return true;

    }
};