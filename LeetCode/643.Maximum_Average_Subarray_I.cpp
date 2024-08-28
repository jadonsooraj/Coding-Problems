class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0, j=0;
        double sum=0, ans=INT_MIN;

        while(j<nums.size()){
            sum=sum+nums[j];
            if(j-i+1< k) j++;
            else if(j-i+1==k){
                ans=max(ans,sum);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return ans/k;
    }
};