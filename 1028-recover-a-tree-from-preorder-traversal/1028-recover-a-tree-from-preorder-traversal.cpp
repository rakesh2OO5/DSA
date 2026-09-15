class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        int i = 0;
        return build(traversal, i, 0);
    }

private:
    TreeNode* build(string& s, int& i, int depth) {
        int n = s.size();
        int j = i;
        int dashes = 0;
        while (j < n && s[j] == '-') {
            dashes++;
            j++;
        }
        if (dashes != depth)
            return nullptr;
        i = j;
        int value = 0;
        while (i < n && isdigit(s[i])) {
            value = value * 10 + (s[i] - '0');
            i++;
        }
        TreeNode* root = new TreeNode(value);
        root->left = build(s, i, depth + 1);
        root->right = build(s, i, depth + 1);
        return root;
    }
};