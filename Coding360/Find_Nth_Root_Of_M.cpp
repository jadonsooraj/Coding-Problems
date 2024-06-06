int func(int mid, int n, int m){
  long long ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*mid;
    if(ans>m) return 2;
  }
  if(ans==m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int left=1, right=m;

  while(left<=right){
    int mid=(left+right)/2;
    int midn =func(mid,n,m);
    
    if(midn==1) return mid;
    else if(midn==0) left=mid+1;
    else right=mid-1;
  }
  return -1;
}

//using pow(x,n) 
int NthRoot(int n, int m) {
  // Write your code here.
  int left=1, right=m/n;

  while(left<=right){
    int mid=(left+right)/2;

    if(pow(mid,n)==m) return mid;
    else if(pow(mid,n)<m) left=mid+1;
    else right =mid-1;
  }
  return -1;
}