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
    
    void inOrderTraversal(TreeNode* root, priority_queue<int, vector<int>, greater<int> >& heap) {
        if (root == NULL) {
            return;
        }

      inOrderTraversal(root->left, heap);
      heap.push(root->val);
      inOrderTraversal(root->right, heap);
    }

    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        inOrderTraversal(root, minHeap);
        
        while (k>1) {
            minHeap.pop();
            k--;
        }
        return minHeap.top();
    }
};