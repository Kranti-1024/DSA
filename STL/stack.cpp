#include <bits/stdc++.h>
using namespace std;

// stack is similar to container with push,pop and top. with O(1) time complexity
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    if(s.empty()==0){cout<<"False";}
    else {cout<<"True";}
}