#include <bits/stdc++.h>
using namespace std;

/* Find the second largest element in the given array */

int secondlargestelement(int arr[],int size){
    int max=INT_MIN;
    int slarge=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int j=0;j<12;j++){
        if(arr[j]>slarge&&arr[j]!=max){slarge=arr[j];}
    }
    cout<<"Second largest element is : "<<slarge<<endl;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,11};
    int n=12;
    secondlargestelement(arr,n);
return 0;
}
