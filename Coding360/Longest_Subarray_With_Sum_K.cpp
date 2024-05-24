//You are given an array 'a' of size 'n' and an integer 'k'.
//Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left=0,right=0,n=a.size();
    long long sum=a[0];
    int len=0;

    while(right<n){
        while(left<=right&&sum>k){
            sum=sum-a[left];
            left++;
        }

        if (sum == k) {
            len = max(len, right - left + 1);
        }

        right++;
        if(right<n)sum=sum+a[right];
    }

    return len;
}