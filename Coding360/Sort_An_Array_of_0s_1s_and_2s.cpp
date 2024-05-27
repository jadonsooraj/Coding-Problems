//You have been given an array/list 'arr' consisting of 'n' elements.
//Each element in the array is either 0, 1 or 2.
//Sort this array/list in increasing order.

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int count0=0, count1=0, count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0)count0++;
        else if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
    }

    for(int i=0;i<count0;i++) arr[i]=0;
    for(int i=count0;i<count0+count1;i++) arr[i]=1;
    for(int i=count0+count1;i<n;i++) arr[i]=2;
}


// Using "Dutch National flag algo."

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low=0,mid=0,high=n-1;

   while(mid<=high){
        if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        mid++;
        low++;
        }

        else if( arr[mid]==1)  mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
   }
}
