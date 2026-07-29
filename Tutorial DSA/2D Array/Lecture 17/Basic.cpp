#include <bits/stdc++.h>
using namespace std;

/* 2D Array

syntax:
datatype array_name[row][cols]

*/

int main() {
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;  
}