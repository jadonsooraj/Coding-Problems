//normal approach
class Solution1 {
    public:
        vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd=1;
        
        for(int i=1;i<min(A,B);i++){
            if((A%i==0)&&(B%i==0)) gcd=i;
        }
        
        
        long long lcm=(A*B)/gcd;
        return {lcm,gcd};
    }

}


//Optimal approach
class Solution2 {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd=1;
        long a=A,b=B;
        
        while(a > 0 && b > 0) {
        if(a > b)  a = a % b;
        
        else b = b % a;
        }
        
        if(a == 0) gcd=b;
        
        else gcd=a;
        
        
        long long lcm=(A*B)/gcd;
        return {lcm,gcd};
    }
};
