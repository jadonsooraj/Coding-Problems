//You are given a sorted array 'arr' of positive integers of size 'n'.
//It contains each number exactly twice except for one number, which occurs exactly once.
//Find the number that occurs exactly once.

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int xor1=0;

	for(int i=0;i<arr.size();i++){
		xor1=xor1^arr[i];
	}

	return xor1;	
}