#include <bits/stdc++.h>
using namespace std;
 
/* Missing Number : Given an array nums containing n distinct numbers in the range (0,n) , return the only number in the range that is missing from the array   */
void swap(vector<int>&v,int a,int b){
    int temp=v[a];
    v[a]=v[b];
    v[b]=temp;
}
int number_disappearing(vector<int>&v){
    int i=0;
    int n=v.size();
    while(i<n){
        int correct=v[i];
        if(v[i] < v.size() && v[i]!=v[correct]){
            swap(v,i,correct);
        }
        else {
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]!=i){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> v={3,0,1};
    cout<<number_disappearing(v)<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }



 
return 0;
 
}