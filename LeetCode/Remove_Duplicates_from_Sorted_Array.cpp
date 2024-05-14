//Change the array nums such that the first "count" elements of nums contain the unique elements in the order they were present in nums initially. 
//The remaining elements of nums are not important as well as the size of nums.
//Return count

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
        
    }
};