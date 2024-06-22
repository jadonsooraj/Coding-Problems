class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
        int operations=0;
        
        //iterate through array
        for(int i=0;i <=n-3; i++){
            if(nums[i]==0){
                operations++;
                nums[i]=1;
                nums[i+1]= nums[i+1]== 0 ? 1 : 0;
                nums[i+2]=nums[i+2]== 0 ? 1 : 0;
            }
        }
        
        for(int i=n-2; i<n; i++){
            if(nums[i]==0) return -1;
        }
        
        return operations;
    }
};