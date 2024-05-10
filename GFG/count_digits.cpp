//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int num_in_use=N;
        
        while(num_in_use>0){
            int digit=num_in_use%10;
            
            if(digit>0)
            {if(N%digit==0)
                count++;
            }
            num_in_use=num_in_use/10;
        }
        return count;
    }
};
