#include <bits/stdc++.h>
using namespace std;

/* Compute X^n Binary exponentiation 

2^-31 << n <<2^31

*/

int main() {
    double x;
    int n;

    long binForm = n;
    if(n<0){
        x=1/x;
        binform=-binform;
    }

    double ans =1;

    while(binform>0){
        if(binform % 2==1){
            ans*=x;
        }
        x*=x;
        binform /=2;
    }
    cout<<ans;

return 0;
}