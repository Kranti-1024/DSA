#include <bits/stdc++.h>
using namespace std;

/* Given a positive integer n create a n*n matrix filled with elements from 1 to n2

Ex input=3
output = {1 2 3 
          8 9 4
          7 6 5}

*/

void spiralmatrix(int n){
    vector<vector<int>> matrix(n,vector<int>(n));

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;
    int direction=0;
    int value=1;

    while(left<=right && top<=bottom){

        if(direction==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=value++;
            }
            top++;
        }

        if(direction==1){
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=value++;
            }
            right--;
        }

        if(direction==2){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }

        if(direction==3){
            for(int i=bottom;i>=top;i--){
                matrix[i][left]=value++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"     ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the matrix : ";
    cin>>n;

    // vector<vector<int>> spiral(n,vector<int>(n));

    // spiral=spiralmatrix(n);
    
    spiralmatrix(n);
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<matrix[i][j]<<"     ";
    //     }
    //     cout<<endl;
    // }
    
return 0;
}