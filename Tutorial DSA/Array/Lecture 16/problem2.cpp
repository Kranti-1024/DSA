#include <bits/stdc++.h>
using namespace std;

/* Given an array of integers of size n. Answer q queries where
you need to print the sum of values in a given range of indices
from l to r(both included) 

Note:The vlaues of l and r in queries follow 1-based indexing*/

void sum(vector<int>&v,int l,int r){
    int prefix_sum_l=0;
    int prefix_sum_r=0;
    for(int i=0;i<l-1;i++){
        prefix_sum_l+=v[i];//1 2 3 4 5 6
    }
    for(int i=0;i<r;i++){
        prefix_sum_r+=v[i];
    }
    cout<<prefix_sum_r-prefix_sum_l<<endl;
}

int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    { 
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int q;
    cout<<"Enter no of queries : ";
    cin>>q;
    for(int i=0;i<q;i++){
        int l;
        int r;
        cout<<"l : ";
        cin>>l;
        cout<<"r : ";
        cin>>r;

        sum(v,l,r);
    }


    



return 0;
}