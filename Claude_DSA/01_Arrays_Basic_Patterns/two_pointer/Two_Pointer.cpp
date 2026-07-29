#include <bits/stdc++.h>
using namespace std;

/* Two Pointer Poiter Brute Force : To find two number whose sum is = tager from given array */

void brute_two_sum(vector<int>v,int n){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if((v[i]+v[j])==n){
                cout<<i<<" "<<j;
                break;
            }
        }
    }
}


int main() {
    vector<int> v={1,2,3,5,7,10,11,15};
    int n=21;
    brute_two_sum(v,n);
return 0;
}