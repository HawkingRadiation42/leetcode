class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        int min_diff = INT_MAX;
        TreeNode* prev = NULL;
        inorderTraversal(root, prev, min_diff);
        return min_diff;
    }
    
    void inorderTraversal(TreeNode* node, TreeNode*& prev, int& min_diff) {
        if (node == NULL) {
            return;
        }
        
        inorderTraversal(node->left, prev, min_diff);
        
        if (prev != NULL) {
            min_diff = min(min_diff, node->val - prev->val);
        }
        prev = node;
        
        inorderTraversal(node->right, prev, min_diff);
    }
};
