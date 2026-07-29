//Count the number of occurences of the particular element

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,1,2,3,4,2,3,4,1};
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    int x=1;
    int occured=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occured=occured+1;
        }
    }cout<<endl;
    cout<<occured<<endl;
}