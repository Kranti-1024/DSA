#include <bits/stdc++.h>
using namespace std;

int main(){
    // In priority queque the max element is allways on the top 
    // It pops the max element

    // MAX Heap >> Maintains a tree
    priority_queue<int> pq;
    pq.push(2);//2
    pq.push(5);//2 5
    pq.push(8);//2 5 8
    pq.push(10);// 2 5 8 10
    pq.push(3);// 2 3 5 8 10

    pq.pop();// will delete the max element i.e on top i.e 10
    cout<<pq.top()<<endl; // will return the max element at top

    // Min Heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    priority_queue<int> pq2;
    pq2.push(2);//2
    pq2.push(5);//5 2
    pq2.push(8);//8 5 2
    pq2.push(10);//10 8 5 2
    pq2.push(3);// 10 8 5 3 2

    pq2.pop();// will delete the min element i.e on top i.e 10
    cout<<pq2.top()<<endl;//will return the min element at top

    //push log(n)
    //pop long(n)
    //top O(1)
}