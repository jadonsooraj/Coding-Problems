class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(t[j]==s[i]) i++;
            j++;
        }
        return i==s.size();
    }
};