#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Add Element
    vector<float> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    for(auto i:v2){
        cout<<i<<" ";
    }cout<<endl;

    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;

    //using insert
    v2.insert(v2.begin()+1,1.5); 
    for(auto i:v2){
        cout<<i<<" ";
    }cout<<endl;
}