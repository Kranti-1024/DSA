#include <bits/stdc++.h>
using namespace std;

/* Given a boolean 2D array where each row is sorted.Find the row with maximum number of 1s 
Ex
input n=3 m=4
matrix[]={0,1,1,1
          0,0,0,1
          0,0,1,1}
          
output : 0 // i.e 0th row*/


int leftmostone(vector<vector<int>> &v){
    int leftmost1=-1;
    int maxonesrow=-1;
    int j=v[0].size()-1;

    while(j>=0 && v[0][j]==1){
        leftmost1=j;
        maxonesrow=0; 
        j--;
    }
    
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
        leftmost1=j;
        j--;
        maxonesrow=i;
    }
    }

    return maxonesrow+1;
}

int maxonesrow(vector<vector<int>> &v){
    int maxone=INT_MIN;
    int maxonesrow=-1;
    int column = v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberofones = column - j;
                if(numberofones>maxone){
                    maxone=numberofones;
                    maxonesrow=i+1;
                }
                break;
            }
        }
    }
    return maxonesrow;
}

int main() {
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;

    int m;
    cout<<"Enter no of columns : ";
    cin>>m;

    vector<vector<int> > v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter ("<<i<<","<<j<<")th element : ";
            cin>>v[i][j];
        }
    }

    int ans = leftmostone(v);
    cout<<ans;
return 0;
}