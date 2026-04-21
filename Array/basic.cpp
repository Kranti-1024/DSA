#include <bits/stdc++.h>
using namespace std;
// array is collection of elements of same datatype
// stored is contiguous memory block
// int takes 4 bytes char takes 1 bytes
// contiguous means element at index 0 and index 1 will have adjacent address
int main(){
    // int arr[10];// creating an array
    // int arr1[] = {1,3,4,5,3,4,5,6,7,7,8};

    // for(auto it:arr1){ // To print entire array
    //     cout<<it<<" ";
    // }cout<<endl;

    // arr1[0]=25; // to update array 

    // for(auto it:arr1){
    //     cout<<it<<" ";
    // }cout<<endl;

    // cout<<arr1[0]<<endl; // print element at specified index

    // cout<<sizeof(arr1)<<endl; 
    //  // this will return the total space occupied i.e 4bytes of int * total elements
    //                                         //i.e 4*11 = 44 is the size
    
    // cout<<(sizeof(arr1)/sizeof(arr1[0]))<<endl;//This will return lenght of array i.e 44/4 = 11 elements

    // //Accessing element using for loop
    // for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++){
    //     cout<<arr1[i]<<" ";
    // }cout<<endl;

    // //Accessing element using for each loop
    // for(auto it:arr1){
    //     cout<<it<<" ";
    // }cout<<endl;

    // //Accessing element using while loop
    // int i=0;
    // int size=sizeof(arr1)/sizeof(arr1[0]);
    // while(i<size){
    //     cout<<arr1[i]<<" ";
    //     i++;
    // }
    // cout<<endl;
    int n;
    int arr3[n];
    cout<<"Enter size of array : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element : ";
        cin>>arr3[i];
    }
    cout<<endl;

    for(auto it:arr3){
        cout<<it<<" ";
    }

}