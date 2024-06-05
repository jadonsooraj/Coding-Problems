//M-1 using reverse function
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
    
};

//M-2 usning temp[d] array