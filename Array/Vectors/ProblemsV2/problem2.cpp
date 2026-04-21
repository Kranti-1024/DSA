#include <bits/stdc++.h>
using namespace std;

/* Q> Given an array of integers 'a',move all the even integers at the beginning of the array follwed by all the 
     odd integers. The relative order of odd or even integers does not matter . 
     Return any array that satisfies the condition.
     */
void sortevenodd(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]); 
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }
}
int main() {
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"Hii"<<endl;
    sortevenodd(v);
    cout<<"Hii"<<endl;
    for(int it:v){
        cout<<it<<" ";
    }
return 0;
}