class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest=arr[0],slargest=-1;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest) largest=arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>slargest && arr[i]<largest) slargest=arr[i];
	    }
	    return slargest;
	    
	    
	}