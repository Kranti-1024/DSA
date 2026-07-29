#include <bits/stdc++.h>
using namespace std;

/* Maximum Subarray is a subarray whose sum is maximum */

//Brute force approach
int main() {
    int n=7;
    int maxsum = INT_MIN;
    int arr[n]={3,-4,5,4,-1,7,-8};
    for(int st=0;st<n;st++){
        int currsum = 0;
        for(int i=st;i<n;i++){
            currsum+=arr[i];
            maxsum = max(currsum,maxsum);
        }
    }
    cout<<maxsum<<endl;
return 0;
}