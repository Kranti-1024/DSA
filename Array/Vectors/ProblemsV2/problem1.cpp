#include <bits/stdc++.h>
using namespace std;

/* Q> Sort the array consisting of only 1s and 0s */

int main() {
    int arr[]={1,0,1,0,1,0,1,0,1,1,0,1};
    int cnt=0;
    for(int i=0;i<12;i++){
        if(arr[i]==0){ cnt++;}
    }
    cout<<cnt<<endl;
    for(int i=0;i<12;i++){
        if(i<cnt){arr[i]=0;}
        else{arr[i]=1;}
    }
    for(int it:arr){
        cout<<it<<" ";
    }
return 0;
}