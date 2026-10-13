#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=(nums.size()+1)/2;
        long long result=0;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = 1LL * nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end(), greater<int>());
        for(int i=0;i<nums.size();i++){
            if(i<n){
                result+=nums[i];
            }
            else{
               result-=nums[i];
            }
        }
        return result;


    }
};
