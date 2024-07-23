class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos=0;
        for(int num: nums){
            if(num!=val){
                nums[pos]=num;
                pos++;
            }
        }
        return pos;
    }
};