// Find the last occurence of the element in an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,1,2,3,4,2,3,4,1};
    for(int i:v){
        cout<<i<<" ";
    }

    int x=1;
    int occurence=false;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence = i;
        }
    }cout<<endl;

    cout<<occurence<<endl;

    // Alternate method

    for(int i=v.size();i=0;i--){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }
    cout<<occurence<<endl;

}
