#include <bits/stdc++.h>
using namespace std;

/* Check if we can partition the array into two subarrays with 
equal sum.More formally, check that the prefix sum of a part 
of the array is equal to the suffix sum of rest of the array */

bool partition(vector<int>&v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    bool Exist=false;
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        if(prefix_sum==total_sum-prefix_sum){
            Exist=true;
            break;
        }
    }
    return Exist;
}

int main() {
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<partition(v)<<endl;


return 0;
}