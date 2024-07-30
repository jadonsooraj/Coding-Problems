class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i1=0, i2=0, j=0;
        int sum1=0, sum2=0, count=0;

        while(j<nums.size()){
            sum1=sum1 + nums[j];
            sum2=sum2 + nums[j];
            while(i1<=j && sum1>goal){
                sum1=sum1-nums[i1];
                i1++;
            } 
            while(i2<=j && sum2>=goal){
                sum2=sum2-nums[i2];
                i2++;
            } 
            
            count=count+i2-i1;
            j++;
        }
        return count;
    }
};