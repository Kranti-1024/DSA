#include <bits/stdc++.h>
using namespace std;
 
/* Find Duplicate Number : 
Given an array of integer nums containing n+1 integers where each integer is in the range [1,n] inclusive 

There are multiple repeated number in the nums , return this repeated number.

Ex ; input = [4,3,2,7,8,2,3,1]
output = [2,3] 
*/

void swap(vector<int>&v,int a,int b){
    int temp = v[a];
    v[a]=v[b];
    v[b]=temp;
}
 
void duplicate_number(vector<int>&v){
    int i=0;
    int n=v.size();
    list<int> ls;
    while(i<n){
        int correct=v[i]-1;
        if(v[i]<=n && v[i]!=v[correct]){
            swap(v,i,correct);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=v[i]-1){
            ls.push_back(v[i]);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> v={4,3,2,7,8,2,3,1};
    duplicate_number(v);
return 0;
 
}