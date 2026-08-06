class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>m;
         vector<pair<int,int>>ans;
         vector<int>temp;
        for(int i  =0;i<nums.size();i++){
             m[nums[i]]++;
        }
        for(auto X :m){
            ans.push_back({X.second,X.first});
        }
        sort(ans.rbegin(), ans.rend());
        for(int i =0; i<k ;i++){
            temp.push_back(ans[i].second);
        }
        return temp;
    }
};