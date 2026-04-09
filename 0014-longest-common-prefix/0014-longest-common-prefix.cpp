class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin() , str.end());

        string s = str[0];
        int i=0;
        string t =str[str.size()-1];
        int j=0;

       string ans="";
        while(i<s.size() && j<t.size()){
            if(s[i]==t[i]){
                ans+=s[i];
                i++; j++;
            }
            else break;
        }
        return ans;
    }
};