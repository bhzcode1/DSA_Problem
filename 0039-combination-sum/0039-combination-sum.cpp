class Solution {
public:
    void solve(vector<int> &candidates,vector<int>&current,int target,int index,vector<vector<int>>&ans)
    { 
      if(target == 0){
        ans.push_back(current);
        return;
      }  
       if(target<0){
          return;
       }
      for(int i =index;i<candidates.size();i++){
         current.push_back(candidates[i]);
         solve(candidates,current,target-candidates[i],i,ans);
         current.pop_back();
      }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>ans;
        solve(candidates,current,target,0,ans);
        return ans;
    }
};