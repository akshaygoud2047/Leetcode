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
bool isidentical(TreeNode* root, TreeNode* subRoot){
    if(root == NULL && subRoot == NULL) return true;
    if(root == NULL || subRoot == NULL) return false;
    if(root->val!=subRoot->val) return false;

    return isidentical(root->left,subRoot->left)
    && isidentical(root->right,subRoot->right);
}
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;
        if(root->val == subRoot->val){
            if(isidentical(root,subRoot)) return true;
        }
        int isleftsubtree =  isSubtree(root->left,subRoot);
        if(!isleftsubtree) return isSubtree(root->right,subRoot);
        return true;
    }
};