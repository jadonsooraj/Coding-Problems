//M-1: using simple linear search from front and back
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int front=-1,back=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            front=i;
            break;
        }
    }

    for(int j=n-1;j>=0;j--){
        if(arr[j]==k){
            back=j;
            break;
        }
    }

    return {front,back};
}

//M-2 Using Binary search twice effectively
int lastoccurance(vector<int> &arr,int n,int x){
	int low=0,high=n-1;
	int last=-1;

	while(low<=high){
		int mid =(low+high)/2;

		if(arr[mid]==x){
			last=mid;
			low=mid+1; //when found look for last occurance in right array if exist
		}
		else if (arr[mid]<x) low=mid+1;
		else high =mid-1;
	}
	return last;
}

int firstoccurance(vector<int> &arr,int n,int x){
	int low=0,high=n-1;
	int first=-1;

	while(low<=high){
		int mid =(low+high)/2;

		if(arr[mid]==x){
			first=mid;
			high=mid-1; //when found look for first occurance in left array if exist
		}
		else if (arr[mid]<x) low=mid+1;
		else high =mid-1;
	}
	return first;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
	int first=firstoccurance(arr,n,k);
	if(first==-1) return {-1,-1};
	int last=lastoccurance(arr,  n,  k);

	return {first,last};
}

