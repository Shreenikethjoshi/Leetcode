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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(root);
        int leftToRight=1;
        while(!q.empty()){
            int size=q.size();
            vector<int> row(size);
            
            for(int i=0;i<size;i++){
                TreeNode* n=q.front();
                q.pop();
                int idx=(leftToRight) ? i: (size-i-1);
                row[idx]=n->val;
                if(n->left!=NULL) q.push(n->left);
                if(n->right!=NULL) q.push(n->right);
            }
            leftToRight=!leftToRight;
            ans.push_back(row);

        }
        return ans;
    }
};