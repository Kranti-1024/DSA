#include <bits/stdc++.h>
using namespace std;
// A Set stores in sorted and unique values only
int main(){
    set<int> s;
    s.insert(1);// 1
    s.insert(2); // 1 2
    s.emplace(4);// 1 2 4
    s.insert(2);//1 2 4
    s.insert(3);// 1  2 3 4
    // cout<<s.top()<<endl;  Does not exist
    // cout<<s.front()<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it = s.find(2);//stores the address of 2 if exists
    cout<<*(it);//returns the value at stored address

    auto cnt = s.count(1);//counts no of times 1 appeared in set since set is unique it will return 1 if not exist 
                        // will return  0

    s.erase(1);// deletes 1 by maintaining sorted order
    s.insert(1);
    auto it1 = s.find(3);
    auto it2 = s.find(1)

    s.erase(it1);// will erase 3
    s.erase(it2);// will erase 1
    
    s.erase(it2,it1);// will erase from 1 to 3
    
    // set have time complexity Log(n)
}