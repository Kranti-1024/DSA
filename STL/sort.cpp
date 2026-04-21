 #include <bits/stdc++.h>
 using namespace std;

 int main(){

    vector<int> v{1,3,4,2,4,6,8,8,2,4,5,67,8,9,90};
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
    
    int arr[18]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
    sort(arr,arr+18);
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<endl;
    
    // sort(v.begin(),v.end(),greater<int>);
    // // sorts in decending order
    // for(auto it:v){
    //     cout<<it<<" ";
    // }cout<<endl;

    // sort(arr,arr+18,greater<int>);
    // for(auto it:arr){
    //     cout<<it<<" ";
    cout<<endl;

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    //sort according to first element
    //if first element is same sort according to second element
    // but in descending order

    bool comp(pair<int,int> p1,pair<int,int> p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;
        // both are same

        if(p1.first>p2.first) return true;
        return false;
    }


    sort(a,a+3,comp);





 }