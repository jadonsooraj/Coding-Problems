class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxi=INT_MIN, sum=0;
        for(int num: nums) sum+=num;
        int n=nums.size();
        int sum1=(n*(n+1))/2;
        return sum1-sum;
    }
};