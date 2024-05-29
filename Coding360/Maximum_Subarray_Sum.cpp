//Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
//The sum of an empty subarray is 0.

// Using Kadane's Algo

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.

    long long sum=0, maxi=LONG_MIN;

    for(int i=0; i<n; i++ ){

        sum+=arr[i];

        if(sum>maxi) maxi=sum;

        if(sum<0) sum=0;
    }

    if(maxi>0) return maxi;

    else return 0;
}