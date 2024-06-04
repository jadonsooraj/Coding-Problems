//counting 0s, 1s, 2s and placing them
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else count2++;
        }
        for(int i=0;i<count0;i++) nums[i]=0;
        for(int i=count0;i<count0+count1;i++) nums[i]=1;
        for(int i=count0+count1;i<n;i++) nums[i]=2;
    }
};

//m-2 Using Dutch National flag algo
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0) {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};