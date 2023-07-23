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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0){
            return {};
        }
        if(n == 1)
            return {new TreeNode()};
        
        vector<TreeNode*> result;
        
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> ltree = allPossibleFBT(i);
            vector<TreeNode*> rtree = allPossibleFBT(n - 1 - i);

            for (TreeNode* left : ltree) {
                for (TreeNode* right : rtree) {
                    TreeNode* root = new TreeNode(0);
                    root->left = left;
                    root->right = right;
                    result.push_back(root);
                }
            }
        }
        return result;
    }
};