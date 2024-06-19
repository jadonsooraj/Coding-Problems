//using Binary Search
class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0 || x==1) return x;

        int left=1, right=x/2;
        int ans;

        while(left<=right){
            int mid=(left+right + 1LL)/2;

            if(x/mid>=mid) {
                ans=mid;
                left=mid+1;
            }
            else right=mid-1;
        }
        return ans;
    }
};