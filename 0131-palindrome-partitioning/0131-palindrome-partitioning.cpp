class Solution {
public:
    bool isPalindrome(string s){
      
    string rev = s;
    reverse(rev.begin(), rev.end());

    return s == rev;
}
    
    void solve(string s,string current, vector<string>&temp,int index,vector<vector<string>>&ans){
        if(index == s.length()){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.length();i++){
           current = s.substr(index, i - index + 1);
            if(isPalindrome(current)){
                temp.push_back(current);
            
            solve(s,current,temp,i+1,ans);
            temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        string current;
        solve(s,current,temp,0,ans);
        return ans;
    }
};