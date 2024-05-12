//Given an integer n, calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till n-th term.

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n==1){
            return 1;
        }
        
        return (n*n*n)+sumOfSeries(n-1) ;
        
    }
}