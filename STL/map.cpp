 #include <bits/stdc++.h>
 using namespace std;
// Map stores key value pairs where key is Unique and can be of any datatype
 int main(){
    map<int,int> mpp;
    // map<int,pair<int,int>> mpp;
    // map<pair<int,int>,int> mpp;

    mpp[1]=2;// 1 is key and 2 is value

    mpp.insert({2,3}); // 2 is key

    mpp.emplace(3,4); // 3 is key

    // It stores key in sorted order

    for(auto it:mpp){
        cout<<"{"<<it.first<<","<<it.second<<"}"<<endl;
    }

    auto it1 = mpp.find(1);
    cout<<*(it1).second;

    auto it = mpp.find(5);// This will point the iterator to mpp.endl();


    auto it = mpp.upper_bound(2);
    auto it = mpp.lower_bound(3);
 }