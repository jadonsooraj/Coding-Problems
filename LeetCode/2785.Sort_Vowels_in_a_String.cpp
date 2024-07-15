class Solution {
public:
    string sortVowels(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        for(int i=0; i<s.size(); i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }

        //to store all vowel in string in sorted manner
        string vowel;
        //upper vowel
        for(int i=0;i<26;i++){
            while(upper[i]>0){
                vowel.push_back('A'+i);
                upper[i]--;
            }
        }
        //lower vowel
        for(int i=0;i<26;i++){
            while(lower[i]>0){
                vowel.push_back('a'+i);
                lower[i]--;
            }
        }

        //pointer for vowel string
        int pointer_to_vowel=0;
        //traverse through s and place sorted vowel
        for(int i=0; i<s.size();i++){
            if(s[i]=='#'){
                s[i]=vowel[pointer_to_vowel];
                pointer_to_vowel++;
            }
        }
        return s;
    }
};