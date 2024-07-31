class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i1=0, i2=0, j=0;
        int sum1=0, sum2=0;
        int count=0;

        while(j<nums.size()){
            sum1=sum1+ nums[j] % 2;
            sum2=sum2+ nums[j] % 2;

            while(i1<=j && sum1>k){
                sum1= sum1- nums[i1] % 2;
                i1++;
            }
            while(i2<=j && sum2>=k){
                sum2= sum2- nums[i2] % 2;
                i2++;
            }

            count=count+ i2-i1;
            j++;
        }
        return count;
    }
};