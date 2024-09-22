class Solution {
public:
    string reverseWords(string s) {
        //reverse the given string
        reverse(s.begin(),s.end());
        int n=s.size();
        int left=0;
        int right=0;
        int i=0;
        while(i<n){
            //skipping leading zeroes
            while(i<n && s[i]==' ')i++;
    
            if(i==n)break; // to stop index going out of bounds

            //Copy Characters of a Word to the correct position
            while(i<n && s[i]!=' '){
                s[right++]=s[i++];
            }

            //reverse the word
            reverse(s.begin()+left,s.begin()+right);
            
            //add space between words
            s[right++]=' ';
            left=right;
            i++;
        }
        //Finally, it resizes the string to remove any extra space
        s.resize(right-1);
        return s;
    }
};