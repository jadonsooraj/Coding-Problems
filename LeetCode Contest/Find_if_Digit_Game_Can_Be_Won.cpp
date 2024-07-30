//You are given an array of positive integers nums.

//Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers or all double-digit numbers from nums, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.

//Return true if Alice can win this game, otherwise, return false.

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0, sum2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                sum1=sum1+nums[i];
            }
            else{
                sum2=sum2+nums[i];
            }
        }
        if(sum1==sum2) return false;
        else return true;
    }
};