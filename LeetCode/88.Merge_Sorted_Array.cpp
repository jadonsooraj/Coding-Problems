class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, pos=m+n-1;
        //start loop from end of both the arrays using 3 pointers
        while(pos>=0){
            //if num1 is over ie copy everything from nums2
            if(i<0) {
                nums1[pos]=nums2[j];
                j--;
            }
            //if nums2 is over ie everything in nums1 is sorted
            else if(j<0){
                break;
            }
            else if(nums1[i]>=nums2[j]){
                nums1[pos]=nums1[i];
                i--;
            }
            else{
                nums1[pos]=nums2[j];
                j--;
            }
            pos--;
        } 
    }
};