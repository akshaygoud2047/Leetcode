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

int travellingfromroot(TreeNode* root){
    int sum = 0;
    int maxi = INT_MIN;
    int level = 1;
    int maxi_level = 1;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        if(curr == NULL){

            if(sum > maxi){
                maxi = sum;
                maxi_level = level;
            }

            sum = 0;
            level++;

            if(q.empty()) break;

            q.push(NULL);
        }
        else{
            sum += curr->val;  

            if(curr->left != NULL){
                q.push(curr->left);
            }

            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }

    return maxi_level;
}

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        return travellingfromroot(root);
    }
};