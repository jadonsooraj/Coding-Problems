int firstoccurance(vector<int> &arr,int n,int x){
	int low=0,high=n-1;
	int first=-1;

	while(low<=high){
		int mid =(low+high)/2;

		if(arr[mid]==x){
			first=mid;
			high=mid-1;
		}
		else if (arr[mid]<x) low=mid+1;
		else high =mid-1;
	}
	return first;
}

int lastoccurance(vector<int> &arr,int n,int x){
	int low=0,high=n-1;
	int last=-1;

	while(low<=high){
		int mid =(low+high)/2;

		if(arr[mid]==x){
			last=mid;
			low=mid+1;
		}
		else if (arr[mid]<x) low=mid+1;
		else high =mid-1;
	}
	return last;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int first=firstoccurance(arr,n,x);
	if(first==-1) return 0;
	int last=lastoccurance(arr,  n,  x);

	return last-first+1;

}
