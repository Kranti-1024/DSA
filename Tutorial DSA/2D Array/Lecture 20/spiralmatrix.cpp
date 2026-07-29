#include <bits/stdc++.h>
using namespace std;

/* Given n*m matrix print the matrix in spiral order */

void spiralmatrix(vector<vector<int>>&matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;

    int direction=0;

    while(left<=right && top<=bottom){
        //left to right
        if(direction==0){
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        }

        //top to bottom
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<matrix[i][right]<<" ";
            }
            right--;
        }

        //right to left
        else if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }

        //bottom to top
        else{
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }

        direction=(direction+1)%4;
        //0,1,2,3
    }
    return;
}

int main() {
    int n,m;
    cout<<"Enter n*m matrix : ";
    cin>>n>>m;

    vector<vector<int> > matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    spiralmatrix(matrix);

return 0;
}