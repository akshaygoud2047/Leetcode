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
public:
    bool check(TreeNode* root,int data){
        if(root == NULL) return 1;

        if(root->val!=data) return false;
        int  l = check(root->left,data);
        int r = check(root->right,data);
        if(l && r) return true;
        
        return 0;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return 1;
        int  l = check(root->left,root->val);
        int  r = check(root->right,root->val);
        if(l && r) return true;

        return false;
    }
};