class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size(), count=0;
        vector<int> expected;

        for(int i=0;i<n;i++){
            expected.push_back(heights[i]);
        }
        sort(expected.begin(),expected.end());

        for(int i=0;i<n;i++){
            if(expected[i]!=heights[i]) count++;
        }
        return count;
    }
};