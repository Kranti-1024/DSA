#include <bits/stdc++.h>
using namespace std;

/*  Kadans algorithm */

int Solution(vector<int>&v){
    int currsum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<v.size();i++){
        currsum+=v[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main() {
    vector<int> v={45,2,3,4,5,-5,-19,45};
    int soln = Solution(v);
    cout<<soln;
return 0;
}