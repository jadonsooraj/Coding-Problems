class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;
        string ans;

        while(i<word1.size() && j<word2.size()){
            ans.push_back(word1[i]);
            i++;
            ans.push_back(word2[j]);
            j++;
        }
        while(i<word1.size()){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<word2.size()){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};

//optimised
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        string ans;
        for (int i = 0; i < m || i < n; ++i) {
            if (i < m) ans += word1[i];
            if (i < n) ans += word2[i];
        }
        return ans;
    }
};