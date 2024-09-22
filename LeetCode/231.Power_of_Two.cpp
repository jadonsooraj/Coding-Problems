//logic: if (n & n-1) ==0 then it is power of 2, i.e. power of 2 consist of only 1 set bit

class Solution {
public:
    bool isPowerOfTwo(int n){
        return n>0 && (n & n-1)==0 ? true : false;
    }
};
