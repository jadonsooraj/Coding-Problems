//using Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0, maxi=INT_MIN;

        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>maxi)maxi=sum;
            if(sum<0) sum=0;
        }
        return maxi;
    }
};