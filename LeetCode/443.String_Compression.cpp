class Solution {
public:
    int compress(vector<char>& chars) {
        int ansIndex=0, n=chars.size();

        for(int i=0, j=i+1; i<n; ){
            //counting occurance of char
            while(j<n && chars[j]==chars[i]) j++;

            //storing the char and increment ansIndex 
            chars[ansIndex++]=chars[i];

            if(j-i>1){
                //storing the occurance only if >1 && use 'to_string()' to convert 2-digits into chars;
                for(char c: to_string(j-i)) chars[ansIndex++]=c;
            }
            //moving to next char as j is pointing to it
            i=j;
        }
        return ansIndex;
    }
};