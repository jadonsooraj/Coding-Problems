class Solution {
public:
    int longestPalindrome(string s) {
//Store frequency of characters
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a') lower[s[i]-'a']++;

            else upper[s[i]-'A']++;
        }

        int count=0;
        bool odd=0;

        for(int i=0; i<26; i++){
            //for lower char store count if its even
            if(lower[i]%2==0) count+=lower[i];
            //store count for even part by subtracting 1 and set odd as 1
            else{
                count+=lower[i]-1;
                odd=1;
            }

            //for upper char store count if its even 
            if(upper[i]%2==0) count+=upper[i];
            //store count for even part by subtracting 1 and set odd as 1
            else{
                count+=upper[i]-1;
                odd=1;
            }
        }

        return count+odd;
    }
};