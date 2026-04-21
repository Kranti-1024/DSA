#include <bits/stdc++.h>
using namespace std;

int main(){
    char vowels[5];

    //using for loop
    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }cout<<endl;

    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }cout<<endl;

    // using for each loop
    // for(char element:vowels){ // this will not take input because element is at different address
    //     cin>>element;
    // }

    //using for each loop
    for(char &element:vowels){
        cin>>element;
    }cout<<endl;

    for(char &element:vowels){
        cout<<element<<endl;
    }


}