#include <bits/stdc++.h>
using namespace std;

// an iterator stores the location in memory
int main(){

    vector<int> v{1,2,3,4,5,6,7,8,9,10};

    cout<<v[0]<<endl;

    vector<int>::iterator it=v.begin();
    //v.begin i.e 'it' has address of v[0]
    // cout<<(it)<<endl;
    cout<<*(it)<<endl;//print 1
    it++;
    cout<<*(it)<<endl;//print 2

    vector<int>::iterator iti=v.end();
    //v.endl i.e 'iti' stores the address after last element in vector
    //hence before accessing it should be reduced i.e it-- to get last element;
    iti--;
    cout<<*(iti)<<endl;

    cout<<v.back()<<" "<<endl; // to get last element

    for(auto iter=v.begin();iter!=v.end();iter++){ // To print entire vector
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    for(auto itererres : v){
        cout<<itererres<<" ";
    }

}