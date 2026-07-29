#include <bits/stdc++.h>
using namespace std;
 
/* Majority Element II is a problem where we have return the elements that are greater than n/3 times of 
the given array also the logic says that there will not be more tha 2 elements that appear n/3 times

i.e The ans array = [x,y] only 2 elements at max 0 at minimum

*/

// Brute Force approach
void brute_majority_element(vector<int> v){
    list<int> ls;
    for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                cnt++;
            }
        }
        if(ls.size()==0 && (cnt>(v.size()/3))){
            ls.push_back(v[i]);
        }
        if(ls.size()==1 && (cnt>(v.size()/3)) && v[i]!=ls.front()){
            ls.push_back(v[i]);
            break;
        }
    }
    for(auto it:ls){
        cout<<it<<" ";
    }
}

// Better Solution
void better_majority(vector<int> v){
    list<int> ls;
    map<int,int> mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }

    for(auto it:mpp){
        if(it.second > v.size()/3){
            ls.push_back(it.first);
        }
    }

    for(auto it:ls){
        cout<<it<<" ";
    }
}

// Optimal Solution
void optimal_majority(vector<int> v){ // vector<int> optimal_majority()
    int cnt1=0;
    int cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(cnt1 == 0 && el2 != v[i]){
            cnt1=1;
            el1=v[i];
        }
        else if(cnt2 == 0 && el1 != v[i]){
            cnt2=1;
            el2=v[i];
        }
        else if(v[i]==el1) cnt1++;
        else if(v[i]==el2) cnt2++;
        else{
            cnt1--,cnt2--;
        }
    }
    vector<int> ls;
    cnt1=0,cnt2=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==el1) cnt1++;
        if(v[i]==el2) cnt2++;
    }
    int min = v.size()/3;
    if(cnt1 > min) ls.push_back(el1);
    if(cnt2 > min) ls.push_back(el2);
    sort(ls.begin(),ls.end());
    // return ls
    for(auto it:ls){
        cout<<it<<" ";
    }
}

int main(){
    vector<int> v={2,2,2,3,4,3,3};
    brute_majority_element(v);
    cout<<endl;
    better_majority(v);
    cout<<endl;
    optimal_majority(v);
    cout<<endl;
return 0;
 
}