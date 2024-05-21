vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i=0,j=0;
    int m=a.size(), n=b.size();

    vector<int> unionarr;

    while(i<m && j<n){

        if(a[i]<b[j]){
            if(unionarr.size()==0 || unionarr.back()!=a[i])
            unionarr.push_back(a[i]);

            i++;
        }

        else{
            if(unionarr.size()==0 || unionarr.back()!=b[j])
            unionarr.push_back(b[j]);

            j++;
        }
    }

    //Copying remaining elements
    while (i < m) {
        if (unionarr.size() == 0 || unionarr.back() != a[i])
            unionarr.push_back(a[i]);

        i++;
    }

    while(j<n){
        if(unionarr.size()==0 || unionarr.back()!=b[j])
            unionarr.push_back(b[j]);

            j++;
    }

    return unionarr;
}