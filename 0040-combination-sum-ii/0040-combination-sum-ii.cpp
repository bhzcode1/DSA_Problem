class Solution {
public:
    void solve(vector<int>&candidates,vector<int>&current,int target,int index,vector<vector<int>>&ans){
        if(target ==0){
            ans.push_back(current);
            return;
        }
        for(int i =index ;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
             if (candidates[i] > target)
                break;
            current.push_back(candidates[i]);
            solve(candidates,current,target-candidates[i],i+1,ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        solve(candidates,current,target,0,ans);
        return ans;
    }
};