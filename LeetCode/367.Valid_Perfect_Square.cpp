//Simple linear iteration
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long i=1;i<=num;i++){
            if((i*i)==num) return true;
        }
        return false;
        
    }
};

//M-2 Using Binary Search
class Solution {
public:
    bool isPerfectSquare(int num) {
        long left=0, right=num/2;
        
        if(num==1) return true;

        while(left<=right){
            long mid=(left+right)/2;
            if(mid*mid==num) return true;
            else if(mid*mid<num) left=mid+1;
            else right=mid-1;
        }
        return false;
        
    }
};