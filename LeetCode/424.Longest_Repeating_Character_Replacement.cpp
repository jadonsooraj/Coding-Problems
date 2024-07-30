class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0, right=0;
        int ans=0, maxlen=0;
        unordered_map<char,int> mpp;

        while(right<s.size()){
            mpp[s[right]]++;
            maxlen=max(maxlen,mpp[s[right]]);

            if( (right-left+1) - maxlen >k) {
                mpp[s[left]]--;
                if(mpp[s[left]]==0) mpp.erase(s[left]);
                left++;
            }
            else{
                ans=max(ans,right-left+1);
            }
            right++;
        }
        return ans;
    }
};