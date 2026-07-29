#include <bits/stdc++.h>
using namespace std;

/*  */

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> v(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    
    //prefix sum array
    for(int i=1;i<=n;i++){
        v[i]=v[i]+v[i-1];
    }

    int q;
    cout<<"Enter no of queries : ";
    cin>>q;

    
    cout<<endl;
    while(q>0){
        int l;
        cout<<"l : ";
        cin>>l;
        int r;
        cout<<"r : ";
        cin>>r;
        int ans = 0;
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
        q--;
    }

    
return 0;
}