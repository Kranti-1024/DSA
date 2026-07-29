#include <bits/stdc++.h>
using namespace std;

/* Container with Most Water : --11-- you are given an interger array height n, There are n vertical lines drawn such that the two endpoints.

Find two lines such the created container has the maximum water*/


//Brute Force
void brute_force(vector<int> v){
    int maxarea=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            // if(v[i]<=v[j]){
            //     currarea = v[i]*(j-i);
            // }
            // else{
            //     currarea=v[j]*(j-i);
            // }
            int width=j-i;
            int height=min(v[i],v[j]);
            int currarea=width*height;
            maxarea = max(currarea,maxarea);
        }
    }
    cout<<maxarea<<endl;
}

void optimal(vector<int> v){
    int left=0;
    int right=v.size()-1;
    int maxarea=0;
    while(left<right){
        int width=right-left;
        int ht=min(v[left],v[right]);
        int currarea=width*ht;
        maxarea=max(currarea,maxarea);
        if(v[left]<v[right]){
            left++;
        }
        else if(v[right]<v[left]){
            right--;
        }
        else{
            left++;
            right--;
        }
    }
    cout<<maxarea<<endl;
}


int main() {
    vector<int> v={1,8,200,6,2,400,5,4,8,3,7};
    brute_force(v);
    optimal(v);
return 0;
}