//You are given an array ‘ARR’ of length ‘N’ consisting of only ‘0’s and ‘1’s. Your task is to determine the maximum length of the consecutive number of 1’s.

int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int count=1,max_count=0,n=arr.size();

    for(int i=1;i<n;i++){
        if(arr[i]==1&&max_count==0)max_count++;
        if(arr[i]==arr[i-1]&&arr[i]==1){
            count++;
            if(max_count<count)max_count=count;
        }
        else count=1;
    }

    return max_count;
}