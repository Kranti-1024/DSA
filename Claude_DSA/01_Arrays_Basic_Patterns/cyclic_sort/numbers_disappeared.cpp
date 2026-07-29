#include <bits/stdc++.h>
using namespace std;
 
/* Find all number disappeared in an Array 

Given an array nums of n integers where nums[i] is in the range [1,n] return an array of all the integers
in the range [1,n] that do not appear in nums

Ex: nums=[4,3,2,7,8,2,3,1]
output = [5,6]

*/
void swap(vector<int>&v,int a,int b){
    int temp=v[a];
    v[a]=v[b];
    v[b]=temp;
}
void number_disappeared(vector<int>&v){
    list<int> ls;
    int i=0;
    int n=v.size();
    while(i<n){
        int correct=v[i]-1;
        if(v[i] <= n && v[i]!=v[correct]){
            swap(v,i,correct);
        }
        else{
            i++;
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(i!=v[i]-1){
            ls.push_back(i+1);
        }
    }
    for(auto it:ls){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> v={1,1};
    number_disappeared(v);
return 0;
 
}