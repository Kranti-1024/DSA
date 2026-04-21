#include <bits/stdc++.h>
using namespace std;

/* Q> Sort the array consisting of only 1s and 0s */
void sortonesandzeros(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr]=0;
            v[right_ptr]=1;
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
}
int main() {
    vector<int> v={1,0,1,0,1,0,1,0,1,1,0};
    sortonesandzeros(v);
    for(int it:v){
        cout<<it<<" ";
    }
return 0;
}