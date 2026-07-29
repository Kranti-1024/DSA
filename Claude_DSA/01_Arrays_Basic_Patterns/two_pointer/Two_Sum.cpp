#include <bits/stdc++.h>
using namespace std;

/* To find two no such that their sum is = target in a sorted array */

void two_sum(vector<int> v,int n){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        int currsum=v[left_ptr]+v[right_ptr];
        if(currsum==n){
            cout<<left_ptr<<" "<<right_ptr;
            break;
        }
        else if(currsum<n){
             left_ptr++;
        }
        else{
            right_ptr--;
        }
    }
}

int main() {
    vector<int> v={1,2,3,5,7,10,11,15};
    int n=21;
    two_sum(v,n);
return 0;
}

// Two is allways sorted two pointer approach only works when we have a sorted array