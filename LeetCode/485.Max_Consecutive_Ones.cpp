class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        for(int i=0,j=0; j<nums.size();j++){
            if(nums[j]==0){
                i=j+1;
            } 
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};