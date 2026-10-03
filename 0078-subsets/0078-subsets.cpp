class Solution {
public:
  void solve(vector<int>&nums,vector<int> current,int index,vector<vector<int>>&ans){
          if( index == nums.size()){
              ans.push_back(current);
              return ;
          }
          current.push_back(nums[index]);
          solve(nums,current,index+1,ans);
          current.pop_back();
          solve(nums,current,index+1,ans);
  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> ans;
         solve(nums,current,0,ans);
        return ans;
    }
};