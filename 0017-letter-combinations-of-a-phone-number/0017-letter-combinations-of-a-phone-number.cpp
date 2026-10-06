class Solution {
public:
    void solve(string digits, string current ,int index,vector<string>&ans,vector<string>&mp){
         if(index == digits.length()){
            ans.push_back(current);
            return;
         }
         string letter = mp[digits[index]-'0'];
         for(char ch:letter){
            current.push_back(ch);
            solve(digits,current,index+1,ans,mp);
            current.pop_back();
         }
    }
    vector<string> letterCombinations(string digits) {
        string current;
        vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        solve(digits,current,0,ans,mp);
        return ans;
    }
};