#include <bits/stdc++.h>
using namespace std;
 
/* Majority Element : Basically we are given an array of intergers where int appears multiple times 
we have to find the int which apears greater than n/2 times of the array

Ex: [2,2,3,4,2,3,3,2,2] here n/2 = 9/2 = 4.5 = 4 
so 2 appears 5 times greater than 4 so 2 is the majority element*/
 
// Brute Force
int Brute_Majority_ele(vector<int> v){
    int n = v.size()/2;
    for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                cnt++;
            }
        }
        if(cnt>n){
            return v[i];
        }
    }
    return -1;
}

//Better Solution 
int majorityElement(vector<int> v){
    map<int,int>mpp;
    //O(Nlog(N))
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    //O(N)
    for(auto it:mpp){
        if(it.second > (v.size()/2)){
            return it.first;
        }
    }
    return -1;
}

//Moores Voting Algorithm
int moores_majority(vector<int> v){
    int ele;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(cnt==0){
            cnt=1;
            ele=v[i];
        }
        else if(v[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int cnt1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==ele) cnt1++;
    }
    if(cnt1>(v.size()/2)) return ele;
    else return -1;
}

int main(){
    vector<int> v={3,3,3,4,2,3,3,2,2};
    cout<<Brute_Majority_ele(v)<<endl;
    cout<<majorityElement(v)<<endl;
    cout<<moores_majority(v);
 
return 0;
 
} 


