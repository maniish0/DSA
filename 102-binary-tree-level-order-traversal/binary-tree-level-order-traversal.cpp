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
        vector<vector<int>>ans; //declear a data sturc which store a list of the levelwise traversal
        if(root == NULL) return ans; // there is no node found
        queue<TreeNode*> q;//defining a queue data struc
        q.push(root); // first push the root inside the queue

        while(!q.empty()){
            int size = q.size();//whatever the size of the level travers that
            vector<int> level;
            for(int i = 0; i<size; i++){ //this for loop help us to travers the level (no matter what the size is)
                TreeNode *node = q.front();
                q.pop();
                if(node -> left != NULL) q.push(node -> left);
                if(node -> right != NULL) q.push(node -> right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};