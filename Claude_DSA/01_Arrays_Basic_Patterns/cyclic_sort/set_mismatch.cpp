#include <bits/stdc++.h>
using namespace std;
 
/* Set MisMatch : 

You have a set of integers "s" , which originally contains all the numbers from 1 to n . Unfortunately , due to some error , one of the number in "s" got duplicated to another number in the set , which results in repetition of one number and loss of another number.

You are given an integer array nums reepresenting the data status of thes set after the error.

find  the number that occurs twice and the number that is missing and return them in the form of an array.

Ex : input = [1,2,2,4]
output : 2,3
*/

void swap(vector<int>&v,int a,int b){
    int temp=v[a];
    v[a]=v[b];
    v[b]=temp;
}

void set_mismatch(vector<int>&v){
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
            ls.push_back(i);
            ls.push_back(i+1);
        }
    }
    for(auto it:ls){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> v={1,2,2,4};
    set_mismatch(v);
 
return 0;
 
}