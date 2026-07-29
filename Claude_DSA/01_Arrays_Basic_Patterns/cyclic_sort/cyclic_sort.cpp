#include <bits/stdc++.h>
using namespace std;
 
/*  Cyclic Sort : When given nos from range 1 to N => use cyclic sort
Ex : Find the missing number , smallest number , largest number , duplicate number

if n = 5 then just swap the number with index - 1;
*/
void swap(vector<int>&v,int a,int b){
    int temp=v[a];
    v[a]=v[b];
    v[b]=temp;
}
void cyclic_sort(vector<int>&v){
    int n=v.size();
    int i=0;
    while(i<n){
        int correct = v[i]-1;
        if(i != correct){
            swap(v,i,v[i]-1);
        }
        else{
            i++;
        }
    }
}
 
int main(){
    vector<int> v={3,5,2,1,4};
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    cyclic_sort(v);
    for(auto it:v){
        cout<<it<<" ";
    }
 
return 0;
 
}