//Brute Force
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int longest=1;
    int count=0;
    int last_smallest=INT_MIN;
    int n=a.size();

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        if(a[i]-1==last_smallest){
            count+=1;
            last_smallest=a[i];
        }

        else if(a[i]!=last_smallest){
            count=1;
            last_smallest=a[i];
        }
        longest=max(longest,count);
    }
    return longest;
}

//Optimal Solution using unordered_set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;

        int longest = INT_MIN;

        unordered_set<int> st;

        for(int i=0;i<n;i++) st.insert(nums[i]);

        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int count =1;
                int x=it;

                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    count=count+1;
                }
                longest=max(longest,count);
            }
        }
        return longest;
        
    }
};

