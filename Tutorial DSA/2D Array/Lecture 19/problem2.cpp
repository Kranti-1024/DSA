#include <bits/stdc++.h>
using namespace std;

/* Rotate the matrix by 90 dergree */


// vector<vector<int>> transpose(vector<vector<int>>&v){

// }

void transpose(vector<vector<int>>&v){

    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }

    return;
}


int main() {
    int n;
    cout<<"Enter n*n matrix : ";
    cin>>n;

    vector<vector<int>> v(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter ("<<i<<","<<j<<")th element : ";
            cin>>v[i][j];
        }
        cout<<endl;
    }

    cout<<"Original Matrix : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    transpose(v);

    cout<<"90 Degree Rotated matrix : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}