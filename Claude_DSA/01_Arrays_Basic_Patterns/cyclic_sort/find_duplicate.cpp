#include <bits/stdc++.h>
using namespace std;
 
/* Find Duplicate Number : 
Given an array of integer nums containing n+1 integers where each integer is in the range [1,n] inclusive 

There is only one repeated number in the nums , return this repeated number.

Ex ; input = [1,3,4,2,2]
output = 2*/

void swap(vector<int>&v,int a,int b){
    int temp = v[a];
    v[a]=v[b];
    v[b]=temp;
}
 
int duplicate_number(vector<int>&v){
    int i=0;
    int n=v.size();
    while(i<n){
        int correct=v[i]-1;
        if(v[i]<n && v[i]!=v[correct]){
            swap(v,i,correct);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=v[i]-1){
            return v[i];
        }
    }
    return -1;
}
int main(){
    vector<int> v={3,1,3,4,2};
    cout<<duplicate_number(v);
return 0;
 
}