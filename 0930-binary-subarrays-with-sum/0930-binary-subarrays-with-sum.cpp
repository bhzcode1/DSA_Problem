class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefix_Sum = 0; 
        int count= 0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i = 0;i<nums.size();i++){
            prefix_Sum+=nums[i];
            if(m.find(prefix_Sum - goal) != m.end()){
                count+=m[prefix_Sum-goal];
            }
            m[prefix_Sum]++;
         
       
        }
     return count;
    }
};