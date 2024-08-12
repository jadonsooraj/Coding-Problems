//Solution using map and set;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;

        for(int num: arr) mpp[num]++;

        unordered_set<int> st;

        for(auto& it: mpp){
            int freq =it.second;
            if(st.find(freq)!=st.end()) return false;
            st.insert(freq);
        }
        return true;
    }
};