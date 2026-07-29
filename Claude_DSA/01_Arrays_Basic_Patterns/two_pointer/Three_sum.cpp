#include <bits/stdc++.h>
using namespace std;

/* Three SUM : Sum of all there elements(triplets) should be 0 and no duplicate triplets*/
// Brute Force
vector<vector<int>> three_sum(vector<int> v){
    set<vector<int>> st; // set is used to store unique triplets
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if((v[i]+v[j]+v[k])==0){
                    vector<int> temp={v[i],v[j],v[k]}; // a vector that stores triplets
                    sort(temp.begin(),temp.end()); // a fucntion that sorts the stored triplets
                    st.insert(temp); // this line stores the sorted triplets inside the set data sturcture so there are no duplicate triplets
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}


// Better approach using hashing add third element in the bucket checking if its == to third
 vector<vector<int>> triplet(int n,vector<int> &num)
 {
    set<vector<int>> st; // To store unique triplets
    for(int i=0;i<n;i++){
        set<int> hashset; // To store the elements between i and j
        for(int j=i+1;j<n;j++){
            int third = -(num[i]+num[j]); //formula to form a triplet if we know the other two = 0
            if(hashset.find(third) != hashset.end()){ //element third is present not pointing to end
                vector<int> temp ={num[i],num[j],third}; //temp to store vector of triplets
                sort(temp.begin(),temp.end()); // sort the temp so no duplicates get inserted 
                                            // (0,1,-1)==(1,-1,0) both are same
                st.insert(temp);
            }
            hashset.insert(num[j]); // to add the betwen element i.e j after the loop completes 
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
 }
 // The problem with this approach is that the time complexity is O(n2)*n(logn)
// Space complexity is also more for hashset , sort , ans 


//Optimal ; Two pointer approach
vector<vector<int>> two_pointer(int n,vector<int> &num){
    vector<vector<int>> ans;
    sort(num.begin(),num.end()); // nlogn
    for(int i=0;i<n;i++){
        if(i>0 && num[i]==num[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=num[i]+num[j]+num[k];
            if(sum < 0 ){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                vector<int> temp = {num[i],num[j],num[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j< k && num[j]==num[j-1]) j++;
                while(j< k && num[k]==num[k+1]) k--;
            }
        }
    }
    return ans;
}


int main() {
    vector<int> v={-1,0,1,2,-1,-4};
    int n=6;
    auto res = two_pointer(n,v);
    for (const auto &t : res) {
        for (int x : t) cout << x << ' ';
        cout << '\n';
    } 
return 0;
}