class Solution {
private:
//function to check hash of a window
bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
public:
    bool checkInclusion(string s1, string s2) {
        int hash1[26]={0};
        
        //storing char count of s1
        for(int i=0;i<s1.size();i++) hash1[s1[i]-'a']++;

        //taverse s2 in window of s1.size() and compare with hash for each window
        int i=0;
        int windowSize=s1.size();
        int hash2[26]={0};

        //running for first window
        while(i<windowSize && i<s2.size()){
            hash2[s2[i]-'a']++;
            i++;
        }

        if(checkEqual(hash1, hash2)) return 1;

        //window process forward
        while(i<s2.size()){
            //new char count while moving forward
            hash2[s2[i]-'a']++;

            char oldchar=s2[i-windowSize];
            
            //decrement old char count
            hash2[oldchar-'a']--;

            i++;

            if(checkEqual(hash1,hash2)) return 1;
        }
        return 0;
    }
};