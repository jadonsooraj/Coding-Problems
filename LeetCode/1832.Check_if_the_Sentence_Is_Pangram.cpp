class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> hash(26,0);
        for(int i=0;i<sentence.size();i++){
            hash[sentence[i]-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(hash[i]==0) return false;
        }
        return true;
    }
};