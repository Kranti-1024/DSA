#include <bits/stdc++.h>
using namespace std;

/* Sort Colors : Given an array that has integers 0,1 and 2. Sort them in place
so that similar integers are adjacent to each other.
where 0 = RED, 1 = White , 2 = Blue
(also called as dutch national flag problem (red+white+blue))
Testcases:
[2,0,2,1,1,0]--> [0,0,1,1,2,2]
[2,0,1]-->[0,1,2]
[0,0,0]-->[0,0,0]

*/

void sort_colors(vector<int>&v){
    int start=0;
    int mid=0;
    int end=v.size()-1;
    while(mid<=end){
        if(v[mid]==0){
            swap(v[start],v[mid]);
            start++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else if(v[mid]==2){
            swap(v[mid],v[end]);
            end--;
        }
    }
}

 
int main() {
    vector<int> v={2,0,2,1,0,1,2,0,1,2,1,1,0,1,0,1,0};
    sort_colors(v);
    for(auto it:v){
        cout<<it<<" ";
    }
return 0;
}