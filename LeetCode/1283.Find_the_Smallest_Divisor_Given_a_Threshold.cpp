class Solution {
private:
//function to calculate sum of ceil values for given divisor 'mid'
int sumofD(vector<int> &arr, int div){
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum= sum+ceil((double)arr[i]/ (double)div);
    }
    return sum;
}

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN, ans=0;
        for(int i=0; i<nums.size(); i++){
            maxi=max(maxi, nums[i]);
        }

        int left=1, right= maxi;

        while(left<=right){
            int mid=(left+right)/2;

            if(sumofD(nums, mid)<= threshold){
                ans=mid;
                right=mid-1; // look for smaller value
            }
            else left=mid+1;
        }
        return ans;
    }
};