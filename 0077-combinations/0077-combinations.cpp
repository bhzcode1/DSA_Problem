class Solution {
public:
    void solve(vector<int> &current,vector<vector<int>>&ans,int n,int k,int num){
        if(k ==0){
            ans.push_back(current);
            return;
        }
        if(num > n){
            return ;
        }
        current.push_back(num);
        solve(current,ans,n,k-1,num+1);
        current.pop_back();
        solve(current,ans,n,k,num+1);
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        vector<vector<int>> ans;
        solve(current,ans,n,k,1);
        return ans;
    }
};