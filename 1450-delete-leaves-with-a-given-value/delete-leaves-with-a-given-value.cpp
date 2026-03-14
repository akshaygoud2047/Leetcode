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

TreeNode* treetoleafpath(TreeNode* root, int target){

    if(root == NULL) return root;

    
    root->left = treetoleafpath(root->left,target);
    root->right = treetoleafpath(root->right,target);

    if(root->left == NULL && root->right == NULL && root->val == target) return NULL;

    return root;

}
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {

        if(root == NULL) return root;

        return treetoleafpath(root,target);

    }
};