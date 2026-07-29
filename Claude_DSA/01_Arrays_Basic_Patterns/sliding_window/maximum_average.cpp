#include <bits/stdc++.h>
using namespace std;
 
/* Similar to sliding window just we have to divide the subarray by total elements in the array   */
 
float maxsum(vector<int> v,int w){
    float currsum = 0;
    for(int i=0;i<w;i++){
        currsum = currsum + v[i];
    }
    float avg_subarray = currsum/v.size();
    float maxsum=avg_subarray;
    for(int i=1;i<=(v.size())-w;i++){
        currsum=currsum-v[i-1]+v[i+w-1];
        avg_subarray=currsum/v.size();
        if(maxsum<avg_subarray){
            maxsum=avg_subarray;
        }
    }
    return maxsum;
}
 
int main(){
    vector<int> v={1,12,-5,-6,50,3,0,-45,23};
    int  w= 4;
    cout<<maxsum(v,w)<<endl;

return 0;

}