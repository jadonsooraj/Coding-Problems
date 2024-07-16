class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1=num1.size()-1, index2=num2.size()-1;
        int sum=0, carry=0;
        string ans;
        while(index1>=0 && index2>=0){
            sum=(num1[index1]-'0') + (num2[index2]-'0')+ carry;
            carry=sum/10;
            sum=sum%10;
            char c='0'+sum;
            ans.push_back(c);
            index1--;
            index2--;
        }
        //adding remaining elements
        while(index1>=0){
            sum=(num1[index1]-'0')+carry;
            carry=sum/10;
            sum=sum%10;
            char c='0'+sum;
            ans.push_back(c);
            index1--;
        }
        //adding remaining elements
        while(index2>=0){
            sum=(num2[index2]-'0')+carry;
            carry=sum/10;
            sum=sum%10;
            char c='0'+sum;
            ans.push_back(c);
            index2--;
        }
        //adding carry
        if(carry>0){
        char c='0'+carry;
        ans.push_back(c);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};