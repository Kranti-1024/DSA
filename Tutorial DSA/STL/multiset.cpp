 #include <bits/stdc++.h>
 using namespace std;
//Multi set has sorted but not unique it can have multiple duplicate entries
 int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    ms.insert(2);
    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;

    ms.erase(1); // Will erase all occurences of 1
    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;

    auto it1 = ms.find(2); // will erase single occurence of 2
    ms.erase(it1);
    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;
 }