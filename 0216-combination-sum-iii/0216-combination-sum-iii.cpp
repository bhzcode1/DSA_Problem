class Solution {
public:
    void solve(int k,int n, int index,vector<int>&current,vector<vector<int>>&ans){
        if(k==0 && n ==0){
            ans.push_back(current);
            return;
        }
        if(k==0 || n<=0){
            return ;
        }
        for(int i =index;i<=9;i++){
            current.push_back(i);
            solve(k-1,n-i,i+1,current,ans);
            current.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>current;
        vector<vector<int>>ans;
        solve(k,n,1,current,ans);
        return ans;
    }
};