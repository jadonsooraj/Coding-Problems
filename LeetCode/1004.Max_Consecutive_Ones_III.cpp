class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int right=0,left=0;
        int zeroes=0; //to track count of zeroes we can have(max '0' = k)

        while(right<nums.size()){
            if(nums[right]==0) zeroes++;//increse count of zeroes in ans array
            if(zeroes>k){
                while(zeroes>k){
                    //reduce the window from left 
                    if(nums[left]==0) zeroes--;
                    left++;
                }
            }

            if(zeroes<=k){
                ans=max(ans,right-left+1);
            }
            right++;
        }
        return ans;
    }
};