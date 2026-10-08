class Solution {
public:
    void solve(int n, string current,int open, int close,vector<string>&ans){
        if(current.length()== 2*n){
            ans.push_back(current);
            return;

        }
        if(open<n){
            current.push_back('(');
            solve(n,current,open+1,close,ans);
            current.pop_back();

        }
        if(close<open){
            current.push_back(')');
            solve(n,current,open,close+1,ans);
            current.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string current;
        solve(n,current,0,0,ans);
        return ans;
    }
};