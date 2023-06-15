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
    int maxLevelSum(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        int maxsum = INT_MIN;
        int maxlevel = 1;
        int currentlevel = 1;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int levelsize = q.size();
            int levelsum = 0;
            
            for (int i = 0; i < levelsize; i++) {
                TreeNode* current = q.front();
                q.pop();
                
                levelsum += current->val;
                
                if (current->left)
                    q.push(current->left);
                
                if (current->right)
                    q.push(current->right);
            }
            
            if (levelsum > maxsum) {
                maxsum = levelsum;
                maxlevel = currentlevel;
            }
            
            currentlevel++;
        }
        
        return maxlevel;
    }
};