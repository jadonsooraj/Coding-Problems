//Problem Statement
You are given three positive integers num1, num2, and num3.

The key of num1, num2, and num3 is defined as a four-digit number such that:

Initially, if any number has less than four digits, it is padded with leading zeros.
The ith digit (1 <= i <= 4) of the key is generated by taking the smallest digit among the ith digits of num1, num2, and num3.
Return the key of the three numbers without leading zeros (if any).

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        //convert numbers to strings with padding zeroes
        string str1= padwithZeroes(num1);
        string str2= padwithZeroes(num2);
        string str3= padwithZeroes(num3);

        //create the key by taking minimum digit in each position
        string key="";

        for(int i=0; i<4; i++){
            char minDigit= min({str1[i], str2[i], str3[i]});
            key+=minDigit;
        }

        // Remove leading zeros from the key and convert to integer
        int result= stoi(key);
        return result;
    }

    private:
    string padwithZeroes(int num){
        string s=to_string(num);
        while(s.length()<4){
            s= "0"+s;
        }
        return s;
    }
};