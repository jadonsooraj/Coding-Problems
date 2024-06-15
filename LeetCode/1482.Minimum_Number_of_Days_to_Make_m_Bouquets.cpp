class Solution {
private:
bool possible(vector<int> &arr, int day, int m, int k){
    int count=0; // to count bloom for 'mid' day
    int noOfB=0; // number of Bouquets for 'mid' day
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<=day) count++;
        else{
            noOfB+=(count/k); // counting no. of Bouquets;
            count=0; // resetting the count;
        }
    }
    noOfB+=(count/k); // counting no. of bouquets when traverse ends;
    
    if(noOfB>=m) return 1; // 'm' bouquets are possible
    else return 0;
}
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val= m*1LL* k*1LL; //converting product of m & k into long long
        if(val>bloomDay.size()) return -1; //edge case when n*k> no. of flowers available

        int mini=INT_MAX, maxi=INT_MIN;

        //loop for taking maximum and minimum bloomday
        for(int i=0; i<bloomDay.size(); i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }

        int left=mini, right=maxi;

        while(left<=right){
            int mid=(left+right)/2;

            if(possible(bloomDay, mid, m ,k)) right= mid-1;
            else left=mid+1;
        }
        return left;
    }
};