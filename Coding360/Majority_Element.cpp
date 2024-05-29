//M-1 Using using HAshMap
int majorityElement(vector<int> v) {
    map <int,int> mpp;

    for(int i=0;i<n;i++) mpp[v[i]]++;

    for(auto it;mpp){
        if(it.second>n/2) return it.first;
    }

    return -1;
}

//M-2 Using Moore's VOting Algo

int majorityElement(vector<int> v) {
	// Write your code here
	int count=0, ele, n=v.size();

	for(int i=0;i<n;i++){
		if(count==0){
			count++;
			ele=v[i];
		}

		else if(ele==v[i]) count++;
		else count--;
	}

	//verify the majority element;
	int count2=0;

	for(int i=0; i<n; i++){
		if(v[i]==ele) count2++;
	}

    if (count2 > (n/2)) {
        return ele;
    }
        
	return -1;
}