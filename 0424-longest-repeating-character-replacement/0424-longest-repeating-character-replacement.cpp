class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0;
        int maxfreq=0;
        int maxlg =0;
        unordered_map<char,int>m;
        for(int right =0;right<s.size();right++){
             m[s[right]]++;
            maxfreq= max(maxfreq,m[s[right]]);
            while((right-left+1)-maxfreq > k){
                m[s[left]]--;
                left++;
            }
          maxlg= max(maxlg,right-left+1);
        }
        
      return maxlg;
    }
};