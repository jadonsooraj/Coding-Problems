//using concept of circular array and stack
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge(nums.size());
        int n=nums.size();
        stack<int> stk;

        //traverse through circular array startring fron end
        for(int i=2*n-1;i>=0;i--){
            while(!stk.empty() && stk.top() <= nums[i%n]) stk.pop();

            if(i<n) nge[i]= stk.empty() ? -1 : stk.top();
            stk.push(nums[i%n]);
        }
        return nge;
    }
};