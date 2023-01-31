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
    
    void flatten(TreeNode* root) {
        TreeNode* dummy = root;
        //morris traversal preorder
        while(dummy){
            if(dummy->left){ //check if left node present
                TreeNode *runner = dummy->left; //if left node is present then 
                //let the runner find the last right node in the left node 
                //we will change the structure of the tree by changing the runner->right to dummy->right
                //this will lead to flattening of the binary tree
                while(runner->right!=NULL){
                    runner = runner->right;
                }
                runner->right = dummy->right;
                dummy->right = dummy->left;
                dummy->left = NULL;
            }
            dummy = dummy->right;
        }
    }
};