class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum=0;
        int result=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                result=min(result,i-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return (result==INT_MAX?0:result);

    }
};
