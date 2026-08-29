class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       unordered_map<char,int> need;
       unordered_map<char,int> window;
        if(s1.size()> s2.size()){
            return false;
        }
       for(int i =0 ;i<s1.size();i++){
          need[s1[i]]++;
       }
       int left =0;
       for(int right =0;right <s2.size();right++){
           window[s2[right]]++;
         int window_size = right-left+1;
         if(window_size > s1.size()){
            window[s2[left]]--;
            if(window[s2[left]]==0){
                window.erase(s2[left]);
            }
            left++;
         }
         if(need == window){
            return true;
         }

       }
       
       return false;
    }
};