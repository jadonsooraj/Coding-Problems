class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        //declaring a hash array of maximum size of arr1, given in qstn
        vector<int> hash(1001,0);

        //masking in th hash array
        for(int num: arr1) hash[num]++;

        int pos=0;  //pointer to point where element will be filled in arr1;
        //iterating through arr2 to fill in order in arr1
        for(int i: arr2){
            while(hash[i]>0){
                arr1[pos]=i;
                hash[i]--;
                pos++;
            }
        }

        //filling remaining elements
        for(int i=0;i<hash.size();i++){
            while(hash[i]>0){
                arr1[pos]=i;
                hash[i]--;
                pos++;
            }
        }
        return arr1;
    }
};