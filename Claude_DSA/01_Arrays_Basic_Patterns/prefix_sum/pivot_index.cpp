#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int> v){
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<v.size();i++){
        rightsum+=v[i];
    }
    for(int i=0;i<v.size();i++){
        rightsum-=v[i];
        if(leftsum==rightsum){
            return i+1;
        }
        leftsum+=v[i];
    }
    return -1;
}

int main(){
    vector<int> v={2,4,5,6,5,4,2,1}; 
    cout<<pivot(v);
    return 0;
}
