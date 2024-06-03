//M-1 Use Linear search

//M-2 Using Binary Search 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;

        while(left<=right){
            int mid=(left+right)/2;

            if(nums[mid]==target) return mid;
            //right half is sorted
            if(nums[right]>nums[mid]){
                if(nums[right]>=target && nums[mid]<=target) left=mid+1;
                else right=mid-1;
            }
            //left half is sorted
            else{
                if(nums[left]<=target && nums[mid]>=target) right=mid-1;
                else left=mid+1;
            }
        }
        return -1;
        
    }
};