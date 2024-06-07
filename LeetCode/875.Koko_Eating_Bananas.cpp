//function to calculate totol hours took, if koko eats "mid" banana/hour
long hrsformid(vector<int> &arr, long long mid){
    long totalhrs=0;
    for(int i=0;i<arr.size();i++){
        totalhrs= totalhrs+ ceil((double)arr[i]/(double)mid);
        //typecast "int" to "double" as int/int=int and ceil will return int
    }
    return totalhrs;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi=INT_MIN;
        
        //first find maximum elemnet in array
        for(int i=0; i<piles.size();i++){
            if(piles[i]>maxi) maxi=piles[i];
        }

        int left=1; 
        long long right=maxi;

        while(left<=right){
            long long mid=(left+right)/2;
            long hrstook = hrsformid(piles,mid);
            if(hrstook<=h) right=mid-1;
            else left=mid+1;
        }
        return left;
    }
};