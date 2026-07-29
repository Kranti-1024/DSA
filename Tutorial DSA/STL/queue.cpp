#include <bits/stdc++.h>
using namespace std;
// uses FIFO
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);//{1,2,3}
    cout<<q.back()<<endl;//3
    cout<<q.front()<<endl;//1
    q.pop();//deletes  front i.e 1
    cout<<q.front()<<endl; //2
    cout<<q.back()<<endl;// 3

    // swap , size ,empty similar to stack 

    // O(1) time complexity
}