class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first_word="";
        string second_word="";

        for(string s:word1) first_word+=s;

        for(string s:word2) second_word+=s;

        if(first_word==second_word) return true;
        else return false;
    }
};