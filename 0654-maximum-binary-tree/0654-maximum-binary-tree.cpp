/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

private:
TreeNode* helperfunction(vector<int>&nums,int low,int high){
    int MAX = INT_MIN;
    int index= 0;
    if(low > high){
        return NULL;
    }
    for(int i =low;i<=high;i++){
      if(MAX <= nums[i]){
           MAX= nums[i];
           index=i;
      }
    }
    TreeNode* root = new TreeNode(MAX);
    root->left = helperfunction(nums, low,index-1);
    root->right = helperfunction(nums,index+1,high);
    return root;
}
public:

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helperfunction(nums,0,nums.size()-1);
    }
};