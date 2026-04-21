#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Delete Element
    vector<float> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    v2.pop_back();// Delete the last element

    v2.erase(v.begin());// vector_name.erase(position) to delete specfic element

    v.clear();// To clear the vector

}