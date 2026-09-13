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
    vector<int> inorderArray;

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        inorderArray.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* solve(int left,int right,vector<int> inorderArray){
        if(left > right){
            return nullptr;
        }
        int mid = left + (right - left)/2;
        TreeNode* root = new TreeNode(inorderArray[mid]);
        root->left = solve(left,mid-1,inorderArray);
        root->right = solve(mid+1,right,inorderArray);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        int left = 0;
        int right = inorderArray.size()-1;
        root = solve(left,right,inorderArray);
        return root;
    }
};