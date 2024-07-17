class Solution {
public:
    //function to convert roman symbol to equivalent number
    int value(char c){
    if(c=='I') return 1; //I=1
    else if(c=='V') return 5; //V=5
    else if(c=='X') return 10; //X=10
    else if(c=='L') return 50; //L=50
    else if(c=='C') return 100; //C=100
    else if(c=='D') return 500; //X=500
    else if(c=='M') return 1000; //M=1000
    return 0;
    }

    //main solution
    int romanToInt(string s) {
    int index=0;
    int sum=0;
    while(index<s.size()-1){
        if(value(s[index]) < value(s[index+1])){
            sum=sum-value(s[index]);
        }
        else{
            sum+=value(s[index]);
        }
        index++;
    }
    sum+=value(s[s.size()-1]);
    return sum;
    }
};