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

    int heightoftree(TreeNode* root){
        if(root == NULL) return 0;
        
        int leftcall = heightoftree(root->left);
        int rightcall = heightoftree(root->right);

        return max(leftcall,rightcall)+1;
    }

    bool isBalanced(TreeNode* root) {

        if(root == NULL) return true; //empty tree is always balanced.

        int leftht  = heightoftree(root->left);
        int rightht = heightoftree(root->right);

        if(abs(leftht - rightht)>1) return false;

        return isBalanced(root->left) && isBalanced(root->right);

    }
};