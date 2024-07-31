class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0, rsum=0, maxi=0;
        int l=k-1, r=cardPoints.size()-1;

        for(int i=0; i<k; i++) lsum+=cardPoints[i];
        
        maxi=lsum;

        while(l>=0){
            rsum+=cardPoints[r];
            lsum-=cardPoints[l];
            maxi=max(maxi,lsum+rsum);
            l--;
            r--;
        }
        return maxi;
    }
};