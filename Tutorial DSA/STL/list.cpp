#include <bits/stdc++.h>
using namespace std;
// list uses doubly linked list for insertion at front

int main(){
    list<int> ls{1,2,3,4,5};
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;

    ls.push_back(6);

    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;

    ls.emplace_back(7);
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;

    ls.push_front(0);
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;

    ls.push_front(-1);
    for(auto it:ls){
        cout<<it<<" ";
    }cout<<endl;
}

// rest functiosn of vector are same begin(),end() etc;