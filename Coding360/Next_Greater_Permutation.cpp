
vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int n=A.size();
    int index=-1;

    //Find longer prefix match from back
    //findingn breakpoint index
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }

    //edge case i.e. we have givem last permutation
    if(index==-1){
        reverse(A.begin(),A.end());
        return A;
    }

    //finding element greater than A[index] but smller than rest in the longer prefix
    //and swap it
    for(int i=n-1;i>=index;i--){
        if(A[i]>A[index]){
            swap(A[i],A[index]);
            break;
        }
    }

    //reverse the longer prefix from 'index to n-1' as it is already sorted from back
    reverse(A.begin()+index+1, A.end());

    return A;

}