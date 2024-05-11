class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
       long ans=0;
       
       for(int i=1;i<=N;i++){
           ans=ans+(N/i)*i;
           
       }
       return ans;
    }
};