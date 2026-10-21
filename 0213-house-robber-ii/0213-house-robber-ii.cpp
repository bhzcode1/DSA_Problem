class Solution {
public:
    int solve(vector<int>&nums,int index,int start,int end,vector<int>&dp){
        if(index> end){
            return 0;
        }
        if(dp[index]!= -1){
            return dp[index];
        }
        
        return dp[index]= max(nums[index]+solve(nums,index+2,start,end,dp),solve(nums,index+1,start,end,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        vector<int>dp2(nums.size(),-1);
        if(nums.size() == 1){
            return nums[0];
        }
        
        int first =solve(nums,0,0,nums.size()-2,dp);
        int second = solve(nums,1,1,nums.size()-1,dp2);
        return max(first,second);
    }
};