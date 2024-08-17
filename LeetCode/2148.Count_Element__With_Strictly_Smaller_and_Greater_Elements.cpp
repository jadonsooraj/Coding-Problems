class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0, maxi=INT_MIN, mini=INT_MAX;
        for(int i=0;i<nums.size();i++) {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mini && nums[i]<maxi) count++;
        }
        return count;
    }
};

//optimised using max_element(), min_element() to find maxi and mini
class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        int maxi=*max_element(nums.begin(), nums.end());
        int mini=*min_element(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mini && nums[i]<maxi) count++;
        }
        return count;
    }
};