#include <bits/stdc++.h>
using namespace std;
 
// Sliding Window is a problem where we are given an array and the size of subarray we have to find the maximum subarray sum

// [3,8,2,5,7,6,12] sub_array = 4
// 1st = 3+8+2+5 = 18 , 2nd = 8+2+5+7 = 22 3rd = 2+5+7+6 = 20 4th = 5+7+6+12 = 30 so 4th array is maximum
// we have to return 30 as answer

int maxsum(vector<int> v,int w){
    int currsum = 0;
    for(int i=0;i<w;i++){
        currsum = currsum + v[i];
    }
    int maxsum=currsum;
    for(int i=1;i<=(v.size())-w;i++){
        currsum=currsum-v[i-1]+v[i+w-1];
        if(maxsum<currsum){
            maxsum=currsum;
        }
    }
    return maxsum;
}
 
int main(){
    vector<int> v={3,8,2,5,7,6,12};
    int  w= 4;
    cout<<maxsum(v,w)<<endl;

return 0;

}
