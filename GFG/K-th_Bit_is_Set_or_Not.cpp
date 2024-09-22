  bool checkKthBit(int n, int k) {
        if(n & (1<<k)) return true;
        else return false;
    }