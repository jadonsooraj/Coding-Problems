string sort(string s){
    //complete the function here
    vector<int> hash(26,0);
    string ans;
    
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    for(int i=0;i<26;i++){
        while(hash[i]>0){
            ans.push_back('a'+i);
            hash[i]--;
        }
    }
    return ans;
}