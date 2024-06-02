//FInd a index such tha arr[i]>=x

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int ans=n;

	int left=0, right=n-1;

	while(left<=right){
		int mid=(left+right)/2;

                if (arr[mid] >= x) {
                  right = mid - 1;
				  ans=mid;
                } else if (arr[mid] < x)
                  left = mid + 1;
	}

	return ans;
}
