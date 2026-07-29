#include <bits/stdc++.h>
using namespace std;

/*  Maximum subarray are all the possble continuous subarrays of the array


arr=[1,2,3,4] -->Subarray = 1,2,3,4 12,23,34  123,234 1234


*/

int main() {
    int n=5;
    int arr[n]= {1,2,3,4,5};
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
return 0;
}