class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations =0;
        
        bool flipped= false;
        
        for(int i=0; i<nums.size(); i++){
            
            bool actualState= (nums[i]==1)^ flipped;
            if(!actualState){
                operations++;
                flipped=!flipped;
            }
        }
        return operations;
    }
};