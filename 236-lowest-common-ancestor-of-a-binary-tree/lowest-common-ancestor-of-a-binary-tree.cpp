/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool lca(TreeNode* root, TreeNode* p,vector<int>&path){
        if(root == NULL) return false;
        path.push_back(root->val);
        if(root->val == p->val) return true;
        int leftcall = lca(root->left,p,path);
        int rightcall = lca(root->right,p,path);
        if(leftcall || rightcall) return true;
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int>path1;
        vector<int>path2;
        lca(root,p,path1);
        lca(root,q,path2);
        TreeNode* lca = new TreeNode(-1);
        for(int i=0,j=0; i<path1.size() && j<path2.size(); i++,j++){
            if(path1[i]!=path2[j]) return lca;
            lca->val = path1[i];
        }
        return lca;
    }
};