#include <bits/stdc++.h>
using namespace std;

/* Prefix Sum Problem */

void runningsum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }
    return;
}

int main() {
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    runningsum(v);
    
    for(auto it:v){
        cout<<it<<" ";
    }
    
return 0;
}