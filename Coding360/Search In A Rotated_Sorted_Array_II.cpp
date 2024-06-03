//use Linear Search
bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    for(int i=0;i<A.size();i++){
        if(A[i]==key) return true;
    }
    return false;
}
