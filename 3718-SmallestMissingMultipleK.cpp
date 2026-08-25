#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> mp;
        int find=k;
        for(int x: nums){
            mp.insert(x);
        }
        for(auto x: mp){
            if(mp.count(find)){
                find+=k;
            }
            else{
                return find;
            }
        }
        return find;
    }
};
