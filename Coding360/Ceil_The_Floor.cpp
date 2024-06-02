//function to find ceiling
int findceiling(vector<int>& arr, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

//function to find floor
int findfloor(vector<int>& arr, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] <= x) {
			ans = arr[mid];
			low = mid + 1;
		}
		else high = mid - 1;
	}
	return ans;
}


//main
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int floor=findfloor(a,n,x);
	int ceiling=findceiling(a,n,x);

	return {floor,ceiling};
}