#include <bits/stdc++.h>
using namespace std;

/*Find the total number of pairs in the given array whose sum is equal to the given value of x */ 
// Target Sum

int main() {
    int arr[]={3,4,6,7,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x =7;
    int cnt=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){  
            if(arr[i]+arr[j]==x){
                cout<<"{"<<arr[i]<<","<<arr[j]<<"}";
                cnt=cnt+1;}
        }
    }
    cout<<cnt<<endl;
return 0;
}