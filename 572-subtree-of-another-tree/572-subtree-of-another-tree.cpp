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
    bool check(TreeNode* root, TreeNode* sub){
        if(!root || !sub){
            return root==NULL && sub==NULL;
        }else if(root->val == sub->val){    
            return check(root->left,sub->left) && check(root->right,sub->right);
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){
            return false;
        }    
        if(check(root,subRoot)){
            return true;
        }
        else{
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        }
    }
};