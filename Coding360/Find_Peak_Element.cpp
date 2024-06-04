int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n=arr.size();

    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;

    int left=1,right=n-2;

    while(left<=right){
      int mid=(left+right)/2;

      if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
      else if(arr[mid]>arr[mid-1]) left=mid+1;
      else right =mid-1;
    }
    return -1;
}
