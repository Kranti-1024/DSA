#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9,10};

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    v.erase(v.begin()+1); // delets element at index 1

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    v.erase(v.begin(),v.begin()+2); // deletes from v.begin() to v.begin()+1

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    //v.insert(where to insert,what to insert)
    v.insert(v.begin(),3); 

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    v.insert(v.begin(),1,2); // inserts 2 one time at start

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    v.pop_back();//deletes the last element

    v.clear();// clears the vector

    v.empty();// returns true i.e 1 if vector is empty

    vector<int> v2{11,12,13,14,15};

    v.swap(v2);

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    for(auto it:v2){
        cout<<it<<" ";
    }cout<<endl;
}