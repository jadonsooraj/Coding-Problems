//M-1 using hashMap
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> mpp;
        for(int x : target) mpp[x]++;

        for(int x : arr) mpp[x]--;

        for(auto it=mpp.begin(); it!=mpp.end();it++){
            if(it->second!=0) return false;
        }
        return true;
    }
};

//M-2 using Sorting
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());
        if(arr==target) return true;
        else return false;
    }
}; 