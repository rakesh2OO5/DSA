class Solution {
public:
    vector<int> inorderArray;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        inorderArray.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* solve(int left, int right) {
        if (left > right) {
            return nullptr;
        }

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(inorderArray[mid]);

        root->left = solve(left, mid - 1);
        root->right = solve(mid + 1, right);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);

        int left = 0;
        int right = inorderArray.size() - 1;

        return solve(left, right);
    }
};