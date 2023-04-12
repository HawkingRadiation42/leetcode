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
    TreeNode* getsuccessor(TreeNode* root){
        while(root && root->left!=NULL){
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        
        if(key < root->val)
            root->left = deleteNode(root->left, key);
        
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        
        else{
            if(root->left == NULL)// no left child 
            {
                TreeNode* temp = root->right;
                // free(root);
                return temp;
            }
            else if(root->right == NULL){ // no right child 
                TreeNode* temp = root->left;
                // free(root);
                return temp;
            }
            // when there are both children 
            // code to find the next successor required to replace the root
            TreeNode* succ = getsuccessor(root->right);
            root->val = succ->val;
            root->right = deleteNode(root->right, succ->val);
        }
        return root;
    }
};