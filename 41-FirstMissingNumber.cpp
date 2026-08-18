#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int expected=1;
        for(int i=0;i<nums.size();i++){
            if((nums[i]==expected)&&(nums[i]>0)){
                expected++;
            }
            else if(nums[i]>expected){
                return expected;
            }
        }
        return expected;
    }
};
