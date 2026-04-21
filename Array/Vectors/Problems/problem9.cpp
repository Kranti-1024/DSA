#include <bits/stdc++.h>
using namespace std;

/* Rotate the given array 'a' by k steps,where k is non-negative.
note: k can be greater than n as well where n is the size of array 'a'. */

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int k;
    int ansarr[n];
    cout<<"Enter step value : ";
    cin>>k;
    k=k%n;//Since k can be greater than n
    int j=0;

    // Inserting k elements in ansarr
    for(int i=n-k;i<n;i++){
        ansarr[j++]=arr[i];
    }

    //inserting n-k elements in ansarr
    for(int i=0;i<n-k;i++){
        ansarr[j++]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<ansarr[i]<<" ";
    }
}