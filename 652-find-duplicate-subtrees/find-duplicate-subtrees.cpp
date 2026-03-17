/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}a
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

string duplicate_strings(TreeNode* root,vector<TreeNode*>&res,unordered_map<string,int>&mp){

    if(root == NULL) return "N";

    string s = to_string(root->val) +","+ duplicate_strings(root->left,res,mp) +","+ duplicate_strings(root->right,res,mp);

    if(mp[s] == 1){
        res.push_back(root);
    }

    mp[s]++;

    return s;
}

class Solution {
public:
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        vector<TreeNode*>res;
        unordered_map<string,int>mp;

        duplicate_strings(root,res,mp);

        return res;
    }
};