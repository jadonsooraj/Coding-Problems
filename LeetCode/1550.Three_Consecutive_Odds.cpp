class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0,maxcount=INT_MIN;
        for(int i=0;i<arr.size(); i++){
            if(arr[i]%2!=0) {
                count++;
                maxcount=max(maxcount,count);
                if(maxcount==3) return true;
            }
            else count=0;
        }
        return false;
    }
};