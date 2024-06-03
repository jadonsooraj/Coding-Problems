int search(vector<int>& arr, int n, int target)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int left=0,right=n-1;

    while(left<=right){
        int mid=(left+right)/2;

        if(arr[mid]==target) return mid;

        //right half is sorted
        if(arr[right]>arr[mid]){
            if(arr[right]>=target && arr[mid]<=target) left=mid+1;
            else right =mid-1;
        }
        //left half is sorted
        else{
            if(arr[left]<=target && arr[mid]>=target) right=mid-1;
            else left=mid+1;
        }
    }
    return -1;
}
