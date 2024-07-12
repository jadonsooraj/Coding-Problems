class Solution {
public:
    string sortSentence(string s) {
        string temp;
        vector<string> ans(10);
        int count=0;//to keep count words in sentence
        int pos;// to store position of the word

        for(int i=0; i<s.size();i++){
            if(s[i]==' '){
                //extract position and store the word in vector and store no. of word in count
                pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
                i++;
            }
            temp=temp+s[i];
        }
        //extract the last word as it doesnt end with space
            pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            count++;
            temp.clear();
        for(int i=1; i<=count; i++){
            temp=temp+ans[i];
            temp=temp+' ';
        }
        temp.pop_back();
        return temp;
    }
};