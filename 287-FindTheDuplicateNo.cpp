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

// Optimal solution using Floyd's Tortoise and Hare algorithm
class Solution2 {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0,slow2=0,fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        } while (slow!=fast);

        do{
            slow=nums[slow];
            slow2=nums[slow2];
        } while (slow!=slow2);
        return slow2;
    }
};
