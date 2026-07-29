#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;

    pair<int,pair<int,int>> k={1,{2,3}};
    cout<<k.first<<" "<<k.second.second<<" "<<k.second.first;
    cout<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;
    cout<<arr[2].first<<endl;
    cout<<arr[0].second<<endl;
}