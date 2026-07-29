// Find the difference between sum of elements at event indices and sum of element at odd indices
#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
//   int even=0;
//   for(int i=0;i<arr.size();i++){
//     if(arr[i]%2==0){
//         even = even+arr[i];
//     }
//     else{
//         even = even-arr[i];
//     }
//   }
//   cout<<even;

int even=0;
int odd=0;
  for(int i=0;i<arr.size();i++){
    if(arr[i]%2==0){
        even = even+arr[i];
    }
    else{
        odd = odd+arr[i];
    }
  }
  cout<<abs(even)-abs(odd);
  return 0;
}