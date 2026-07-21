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
TreeNode* prev = NULL;
TreeNode* first = NULL;
TreeNode* second= NULL;
private: 
void helperfunction(TreeNode* root){
     if(root == NULL){
        return ;
     }
     helperfunction(root->left);
     if(prev != NULL && prev->val > root->val){
          if(first == NULL){
            first = prev; 
          }
          second = root;
     }
     prev = root;
     helperfunction(root->right);
}
public:

    void recoverTree(TreeNode* root) {
        helperfunction(root);
        int temp = first->val; 
        first->val = second->val; 
        second->val = temp;
    }

};