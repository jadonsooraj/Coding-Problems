class Solution {
public:
    bool isValid(string s) {
        string stk;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[')
                stk.push_back(c);
            else if (stk.empty() || !match(stk.back(), c))
                return false;
            else
                stk.pop_back();
        }
        return stk.empty();
    }

    bool match(char l, char r) {
        return (l == '(' && r == ')') || (l == '[' && r == ']') || (l == '{' && r == '}');
    }
};

//USING STACK
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c:s){
            if(c=='(' || c=='[' || c=='{') st.push(c); 
            
            else if(st.empty() || !match(c,st.top())) return false;
             
            else st.pop();
            
        }
        return st.empty();
    }

    bool match(char c, char ch){
        return ( c==')' && ch=='(' )  ||  ( c==']' && ch=='[' )  ||  ( c=='}' && ch=='{' );
    }
};