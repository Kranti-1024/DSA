#include <bits/stdc++.h>
using namespace std;
int main(){

    // Calculate the sum of all elements in the array 
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int cnt=0;
    for(auto it:arr){
        cnt=cnt+it;
    }
    cout<<cnt<<endl;

    //Calculate the maximum value of the element in the array
    int max = arr[0];
    for(int i=1;i<10;i++){
        if(max>arr[i]){

        }
        else{
            max=arr[i];
        }
    }cout<<max;

    //Linear search : search the given element if exist return 1 if not return -1
    int x = 12;
    bool ele = false;
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            ele=true;
            break;
        }
    }cout<<endl;
    cout<<ele<<endl;
    if(ele==1) cout<<"Element exist"<<endl;
    else cout<<"Element does not exist"<<endl;


}
