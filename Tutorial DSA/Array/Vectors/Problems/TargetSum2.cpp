#include <bits/stdc++.h>
using namespace std;

/* Count the triplets whose sum is equal to value x */

int main() {
    int arr[]={3,1,2,4,0,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x =5;
    int cnt=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){  
            for(int k=j+1;k<size;k++)
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]1<<"}"<<endl;
                    cnt=cnt+1;}
        }
    }
    cout<<cnt<<endl;
return 0;
}