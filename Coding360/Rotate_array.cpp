vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int temp[k];
    int n=arr.size();
    k=k%n;
    for(int i=0;i<k;i++) temp[i]=arr[i];

    for(int i=k;i<n;i++) arr[i-k]=arr[i];

    for(int i=0;i<k;i++) arr[n-k+i]=temp[i];

    return arr;
}