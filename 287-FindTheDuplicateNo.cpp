//Not the optimal solution
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        for(auto x: mp){
            if(x.second>1){
                return x.first;
            }
        }
        return 0;
    }
};
