#include <bits/stdc++.h>
using namespace std;

/*Given a matrix a of dimensionn n*m and the 2 coordinates
(l1,r1) and (l2,r2) . REturn the sum of the rectangle from
(l1,r1) to (l2,r2). */

// pre calculating  the horizontal sum of each row in the matrix 

int rectsum(vector<vector<int>>&v,int l1,int r1,int l2,int r2){
    int sum=0;

    //prefix sum array row-wise
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]+=v[i][j-1];
        }
    }

    //prefix sum array column-wise
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]+=v[i-1][j];
        }
    }

    int top_sum =0,left_sum=0,topleft_sum=0;
    if(l1!=0){
        top_sum=v[l1-1][r2];
    }
    if(r1!=0){
        left_sum=v[l2][r1-1];
    }
    if(l1!=0 && r1!=0){
        topleft_sum=v[l1-1][r1-1];
    }

    sum=v[l2][r2]-top_sum-left_sum+topleft_sum;
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

    //printing prefix sum array
    cout<<"The prefix sum matrix row-wise is  : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<result<<endl;
    
return 0;
}