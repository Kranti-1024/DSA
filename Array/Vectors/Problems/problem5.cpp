// Find the difference between sum of elements at event indices and sum of element at odd indices
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8};

    int esum=0;
    int osum=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            esum=esum+v[i];
        }
        else{
            osum=osum+v[i];
        }
    }cout<<endl;

    cout<<"Answer should be "<<abs((1+3+5+7)-(2+4+6+8))<<endl;
    cout<<"The Difference is : "<<abs(esum-osum)<<endl;
    
}