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
    vector<int> v1;
    vector<int> v2;
    
    void traversal(TreeNode* dummy){
        if (!dummy)
            return;
        
        if(!dummy->left && !dummy->right){
            v1.push_back(dummy->val);
        }
        traversal(dummy->left);
        traversal(dummy->right);
    }
    
    void traversal2(TreeNode* dummy){
        if (!dummy)
            return;
        
        if(!dummy->left && !dummy->right){
            v2.push_back(dummy->val);
        }
        traversal2(dummy->left);
        traversal2(dummy->right);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        traversal(root1);
        traversal2(root2);
        if(v1 == v2){
            return true;
        }
        return false;
    }
};