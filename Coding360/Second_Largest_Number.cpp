vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest=0,sec_largest=0,smallest=INT_MAX,sec_smallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]>largest) largest=a[i];
        if(a[i]<smallest) smallest=a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>sec_largest&&a[i]<largest) sec_largest=a[i];
        if(a[i]<sec_smallest&&a[i]>smallest) sec_smallest=a[i];
    }

    return {sec_largest, sec_smallest};
}
