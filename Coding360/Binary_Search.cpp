//Iterative method
int search(vector<int> &nums, int target) {
    // Write your code here.
    int n=nums.size();
    int left=0,right=n-1;

    

    while(left<=right){
        int mid=(left+right)/2;
        
        if(nums[mid]==target) return mid;

        else if(nums[mid]<target) left=mid+1;

        else right=mid-1;
    }

    return -1;
}

//Using Recursion
int bs(vector<int>&nums, int left, int right, int target){
    if(left>right) return -1;

    int mid=(left+right)/2;

    if(nums[mid]==target) return mid;

    else if(target> nums[mid]) return bs(nums,mid+1,right,target);

    else return bs(nums,left,mid-1,target);
}

int search(vector<int> &nums, int target) {
    // Write your code here.

    return bs(nums,0,nums.size()-1,target);
}