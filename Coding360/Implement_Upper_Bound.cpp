//find smallest index such that arr[index]>x

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int ans =n;
	int left=0, right=n-1;

	while(left<=right){
		int mid=(left+right)/2;

		if(arr[mid]>x){
			ans=mid;
			right=mid-1;
		}
		else if(arr[mid]<=x) left=mid+1;
	}	
	return ans;
}