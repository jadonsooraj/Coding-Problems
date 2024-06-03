int firstoccurance(vector<int> &arr, int n, int k){
    int left=0,right=n-1;
    int first=-1;

    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==k){
            first=mid;
            right=mid-1;
        }
        else if(arr[mid]<k) left=mid+1;
        else right=mid-1;
    }
    return first;
}

int lastoccurance(vector<int> &arr,int n, int k){
    int left=0,right=n-1;
    int last=-1;

    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==k){
            last=mid;
            left=mid+1;
        }
        else if(arr[mid]<k) left=mid+1;
        else right=mid-1;
    }
    return last;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstoccurance(nums,n,target);
        if(first==-1) return {-1,-1};
        int last=lastoccurance(nums,n,target);

        return {first,last};
        
    }
};