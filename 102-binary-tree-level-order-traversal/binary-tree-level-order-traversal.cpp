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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> arr;

        if(root == NULL){
            return arr;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            int size = q.size();
            vector<int> level;

            for(int i = 0 ; i < size ; i++){

                TreeNode* currnode = q.front();
                q.pop();

                level.push_back(currnode->val);

                if(currnode->left != NULL){
                    q.push(currnode->left);
                }

                if(currnode->right != NULL){
                    q.push(currnode->right);
                }

            }

            arr.push_back(level);
        }

        return arr;
    }
};