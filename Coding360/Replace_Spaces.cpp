#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string temp;
	for(char c:str){
		if(c==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else temp.push_back(c);
	}
	return temp;
}