class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int hash[26]={0}; //hash array to store occurance
        //marking the occurance
        for(int c:str){
            if(isalnum(c)){
                int number= c-'a';
                hash[number]++;
            }
        }
        //finding maximum occurance and its index
        int maxi=INT_MIN,index;
        for(int i=0;i<26;i++){
            if(hash[i]>maxi){
                maxi=hash[i];
                index=i;
            }
            
        }
        return 'a'+index;
    }

};