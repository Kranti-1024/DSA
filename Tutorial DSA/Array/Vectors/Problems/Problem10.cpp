#include <bits/stdc++.h>
using namespace std;

/* Given q queries check if the given number is present in the array or not.
Note:value of all the elements in the array is less than 10 to the power of 5. */

int main() {
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    const int N = 1e5 +10;
    vector<int> freq(N,0);
    for(int i=0;i<10;i++){
        freq[v[i]]++;
    }

    int q;
    cout<<"Enter queries : ";
    cin>>q;
    int n;
    for(int i=0;i<q;i++){
        cout<<"Enter "<<i<<" query : ";
        cin>>n;
        cout<<"It Repeated for : "<<freq[n]<<" times."<<endl;
        }
    
return 0;
}