
//Using UpperBound
int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int ans=arr.size();

	int left =0, right= arr.size()-1;

	while(left<=right){
		int mid=(left+right)/2;

		if(arr[mid]<m) left=mid+1;
		else if(arr[mid]>m){
			ans=mid;
			right=mid-1;
		}
		else return mid;
	}
	return ans;
}