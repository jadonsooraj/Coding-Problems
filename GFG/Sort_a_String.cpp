string sort(string s){
    //store frequency of chars
    vector<int> hash(26,0);
    string ans;
    
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    //puush_back chars from hash as it is sorted aphabet
    for(int i=0;i<26;i++){
        while(hash[i]>0){
            ans.push_back('a'+i);
            hash[i]--;
        }
    }
    return ans;
}