#include <bits/stdc++.h>
using namespace std;

/* Rotate the given array 'a' by k steps,where k is non-negative.
note: k can be greater than n as well where n is the size of array 'a'. */

int main() {
    vector<int> v={1,2,3,4,5,6,7,8,9};
    for(int it:v){
        cout<<it<<" ";
    }cout<<endl;
    int k=30;
    k=k%sizeof(v);
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int it:v){
        cout<<it<<" ";
    }
}