#include <bits/stdc++.h>
using namespace std;

/* You're given an array. You'll get multiple sumRange(i, j) queries — return sum of elements from index i to j (inclusive), for each query, efficiently. */

class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) { //[1,3,5,7]
        int n = nums.size();
        prefix.resize(n + 1, 0); // [0,0,0,0,0]
        for(int i=1;i<prefix.size();i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }
    }
    
    int sumRange(int i, int j) {
       int result = prefix[j+1]-prefix[i];
        return result;
    }
};

int main() {
    
return 0;
}