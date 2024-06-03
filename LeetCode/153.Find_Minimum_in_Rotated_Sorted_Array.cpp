//M-1 Use linear search
class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min) min=nums[i];
        }
        return min;
        
    }
};

//M-2 Use Binary search
class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int left=0,right=nums.size()-1;

        while(left<=right){
            int mid=(left+right)/2;

            if(nums[mid]<=nums[right]){
                ans=min(ans,nums[mid]);
                right=mid-1;
            }
            else{
                ans=min(ans,nums[left]);
                left=mid+1;
            }
        }
        return ans;
        
    }
};