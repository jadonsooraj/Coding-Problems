class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =1,jump=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                if(jump==1){
                    nums[count]=nums[i];
                    count++;
                    jump++;
                }
                else if(jump==2) continue ;
            }
            else{
                nums[count]=nums[i];
                count++;
                jump=1;
            }
        }
        return count;
    }
};