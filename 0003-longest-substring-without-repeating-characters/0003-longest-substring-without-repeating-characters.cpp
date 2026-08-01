class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int maxlg= 0;
        unordered_set<char> m;
        for(int right =0;right< s.size();right++){
            while(m.find(s[right]) != m.end()){
                m.erase(s[left]);
                left++;
            }
            m.insert(s[right]);
            maxlg=max(maxlg,right-left+1);
        }
        return maxlg;
    }
};