#include <bits/stdc++.h>
using namespace std;

/*Given a matrix a of dimensionn n*m and the 2 coordinates
(l1,r1) and (l2,r2) . REturn the sum of the rectangle from
(l1,r1) to (l2,r2). */

// Brute Force 

int rectsum(vector<vector<int>>&v,int l1,int r1,int l2,int r2){
    int sum=0;

    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=v[i][j];
        }
    }
    return sum;
}

int main() {
    int n;
    int m;
    cout<<"Enter no of rows : ";
    cin>>n;
    cout<<"Enter no of columns : ";
    cin>>m;

    vector<vector<int> > v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    cout<<"The matrix is  : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    int l1,r1;
    cout<<"Enter (l1,r1) : ";
    cin>>l1>>r1;

    int l2,r2;
    cout<<"Enter (l2,r2) : ";
    cin>>l2>>r2;

    int result=rectsum(v,l1-1,r1-1,l2-1,r2-1);

    cout<<result<<endl;
    
return 0;
}