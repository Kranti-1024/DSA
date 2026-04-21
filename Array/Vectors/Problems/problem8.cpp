#include <bits/stdc++.h>
using namespace std;

/* Find the second largest element in the given array */
int largestelementindex(int arr[],int size){
    int max=INT_MIN;
    int max_index;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
    }
    return max_index;
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,11};
    int largesteleidx = largestelementindex(arr,12);
    // cout<<largestele<<endl;
    // arr[largestele]=-1; not good if duplicates of largestelement exist
    
    int largestele=arr[largesteleidx];
    for(int i=0;i<12;i++){
        if(arr[i]==largestele){
            arr[i]=-1;
        }
    }

    int second_large=largestelementindex(arr,12);
    // cout<<second_large<<endl;
    cout<<"Second Largest element is : "<<arr[second_large]<<endl;
return 0;
}

// Here we are travesing the array for 3 times
//2 times function traverse and 1 time for loop

//Using two loops we will find the second largest in version 2