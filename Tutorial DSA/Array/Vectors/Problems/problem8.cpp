#include <bits/stdc++.h>
using namespace std;

/* Find the second largest element in the given array */
int largestindex(int arr[],int size){
    int max = INT_MIN;
    int max_idx;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
            max_idx=i;
        }
    }
    return max_idx;
}

int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,9};

int largesteleidx = largestindex(arr,10);
int largesele=arr[largesteleidx];

for(int i=0;i<10;i++){
    if(arr[i]==largesele){
        arr[i]=-1;
    }
}

int secondlarges = largestindex(arr,10);
cout<<arr[secondlarges]<<endl;

// Here we are travesing the array for 3 times
//2 times function traverse and 1 time for loop

//Using two loops we will find the second largest in version 2

return 0;

}