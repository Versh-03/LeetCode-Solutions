#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sz=nums.size();
        int prod=nums[sz-1]*nums[sz-2]*nums[sz-3];
        int prod2=nums[0]*nums[1]*nums[sz-1];
        return max(prod,prod2);

    }
};
