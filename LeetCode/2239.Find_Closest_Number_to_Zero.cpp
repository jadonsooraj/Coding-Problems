class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest=INT_MAX;
        int ans=nums[0];
        for(int x:  nums){
            if(abs(x)<abs(closest) || (abs(x)==closest && x > ans)){
                ans=x;
                closest=abs(x);
            } 
        }
        return ans;
    }
};