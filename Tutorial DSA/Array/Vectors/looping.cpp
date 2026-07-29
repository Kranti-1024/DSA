#include <iostream>
#include <vector>
using namespace std;

int main(){
    //loop Vector

    vector<int> v;

    cout<<"Enter elements : ";
    // For loop
    for(int i=0;i<10;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }cout<<endl;

    // For each loop
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //while
    int idx = 0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }

    
}