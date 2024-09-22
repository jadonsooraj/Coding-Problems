class Solution {
  public:
    int findXOR(int l, int r) {
        // complete the function here
        return find_xor(l-1) ^ find_xor(r);
    }
    
    //xor function 
    int find_xor(int num){
        if(num%4==1) return 1;
        else if(num%4==2) return num+1;
        else if(num%4==3) return 0;
        else if(num%4==0) return num;
    }
};