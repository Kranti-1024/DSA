// Check the array is sorted or not
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8};
    vector<int> v2={1,2,3,4,1,23,29};

    bool sort = false;
    for(int i=1;i<v2.size();i++){
        if(v2[i]>=v2[i-1]){
            sort=true;
        }
        else{
            sort=false;
            break;
        }
    }

    if(sort==1){cout<<"The Array is sorted ";}
    else{cout<<"The array is not sorted";}

}