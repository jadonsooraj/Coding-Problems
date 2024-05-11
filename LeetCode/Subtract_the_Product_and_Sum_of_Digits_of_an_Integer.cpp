class Solution {
public:
    int subtractProductAndSum(int n) {
     int sum=0,product=1;

     while(n!=0){
         int x=n%10;
         product=product*x;
         sum+=x;
         n=n/10;

     }   
     return(product-sum);
    }
};