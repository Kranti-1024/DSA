#include <bits/stdc++.h>
using namespace std;

/* Multiplication of matrices */

int main() {
    int n,m,p,q;
    cout<<"Enter no of rows for 1st matrix: ";
    cin>>n;
    cout<<"Enter no of columns 1st matrix: ";
    cin>>m;
    cout<<"Enter no of rows for 2nd matrix: ";
    cin>>p;
    cout<<"Enter no of columns 2nd matrix: ";
    cin>>q;
    int arr[n][m];
    int arr2[p][q];
    int C[n][q];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter ("<<i<<","<<j<<") th element : ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<"Enter ("<<i<<","<<j<<") th element : ";
            cin>>arr2[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if(m==p){
    cout<<"Multiplied Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            int ans=0;
            for(int k=0;k<m;k++){
                ans+=arr[i][k]*arr2[k][j];
                C[i][j]=ans;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"Matrix multiplication not possible."<<endl;
}

    
    }
return 0;
}