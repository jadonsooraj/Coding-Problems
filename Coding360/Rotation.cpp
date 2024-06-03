//Find how many times array is rotated
//Simply find the minimum element and return its index

int findKRotation(vector<int> &arr){
    // Write your code here.
    int n=arr.size();
	int left=0,right=n-1;
	int mini=INT_MAX;
    int index=-1;

	while(left<=right){
		int mid=(left+right)/2;

		//left half is sorted hence take its minimum
		if(arr[left]<=arr[mid]){
			if(arr[left]<mini){
                mini=arr[left];
                index=left;
            }
			left=mid+1;
		}
        //right half is sorted hence take its minimum
		else{
			if(arr[mid]<mini){
                mini=arr[mid];
                index=mid;
            }
			right=mid-1;
		}
	}
	return index;    
}