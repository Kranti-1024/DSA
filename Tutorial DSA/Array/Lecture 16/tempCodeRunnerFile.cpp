#include <bits/stdc++.h>
using namespace std;


/* Given an array of integers of size n. Answer q queries where
you need to print the sum of values in a given range of indices
from l to r(both included) 

Note:The vlaues of l and r in queries follow 1-based indexing*/

void sum(vector <int> &v,int l,int r){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];  // [0,1,3,6,10,15,21]
    }
    cout<<v[r]-v[l-1]; // 9
}

int main(){
    int n;
    cout<<"Enter size of vector : ";
    cin>>n; // 6
 
    vector<int> v;

    v.push_back(0); // [0]

    for(int i=0;i<n;i++){
        int ele; 
        cout<<"Enter element : ";
        cin>>ele;   // 1 2 3 4 5 6
        v.push_back(ele); // [0,1,2,3,4,5,6]
    }

    for(auto it:v){
            cout<<it<<" ";
        }
        
    int q;
    cout<<"Enter no of Queries : ";
    cin>>q;  // 1

    for(int i=0;i<q;i++){
        int l;  
        cout<<"Enter l : ";
        cin>>l;  // 3
        int r;
        cout<<"Enter r : ";
        cin>>r;   // 5
        
        sum(v,l,r); // 
        cout<<endl;
    }
}