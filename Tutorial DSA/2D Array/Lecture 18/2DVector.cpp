#include <bits/stdc++.h>
using namespace std;

/* 2D Vectors

syntax:

vector<vector<data_type> v; // 2D vector of no fixed rows and columns
vector<vector<data_type> v(n);//2D vector of n rows and no fixed columns

vector<vector<data_type>> vec(n,vector<int>(m)); 2D vector of size n*m

vector<vector<int>> vec(3,vector<int>(4),(4,0)); #2D vector of size 3x4 with all values 0

*/

int main() {

    vector<vector<int>> vec(3,vector<int>(4,0)); //2D vector of size 3x4 with all values 0

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}