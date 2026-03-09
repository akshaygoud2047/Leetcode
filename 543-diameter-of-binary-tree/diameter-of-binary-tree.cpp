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
    int heightofthetree(TreeNode* root){
        if(root == NULL) return 0;
        int left = heightofthetree(root->left);
        int right = heightofthetree(root->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int currdiam = heightofthetree(root->left) + heightofthetree(root->right);
        int leftdiam = diameterOfBinaryTree(root->left);
        int rightdiam = diameterOfBinaryTree(root->right);
        return max(currdiam,max(leftdiam,rightdiam));
    }
};