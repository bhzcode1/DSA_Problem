class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left=0;
        unordered_set<int>m;
    for(int right =0;right<nums.size();right++){
       if(right-left > k){
            m.erase(nums[left]);
            left++;
        } 
       if(m.find(nums[right]) != m.end()){
            return true;
        }
        m.insert(nums[right]);
        
    }
    return false;
    }
};