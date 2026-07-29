#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);  // Emplace is same as push_back but faster

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;

    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4); // emplace back detects the pair
    cout<<vec[0].first<<endl;
    cout<<vec[1].first<<endl;

    vector <int> vec1(5,100); // Creates vector of 5 each with 100

    cout<<"{ ";
    for(int i=0;i<5;i++){
        cout<<vec1[i]<<" ";
    }
    cout<<" }";

    vector <int> v2(vec1); // copy vector
    cout<<"{ ";
    for(int i=0;i<5;i++){
        cout<<vec1[i]<<" ";
    }
    cout<<" }";

}