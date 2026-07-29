#include <bits/stdc++.h>
using namespace std;

/* Taking input in 2D Array */

int main() {
    int n;
    int m;
    cout<<"Enter no of rows : ";
    cin>>n;
    cout<<"Enter no of columns : ";
    cin>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter ("<<i<<","<<j<<") th element : ";
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    cout<<"Total Elements : "<<n*m;

return 0;
}