class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //declare an unordered_map to store next greater element for each element of nums2.
        unordered_map<int,int> nextgreater;
        stack<int> stk;

        //find NGE for nums2 using stack
        for(int i = nums2.size()-1; i>=0; i--){

            //it is used to remove any elements from the stack that are smaller than the current element
            while(!stk.empty() && stk.top()<=nums2[i]) stk.pop();

            if(stk.empty()) nextgreater[nums2[i]]=-1;
            else nextgreater[nums2[i]]=stk.top();
            stk.push(nums2[i]);
        }

        vector<int> ans;
        //now traverse through nums1
        for(int num :nums1) ans.push_back(nextgreater[num]);

        return ans;
    }
};