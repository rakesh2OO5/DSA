class Solution {
public:
    int currNum = 0;
    int currFreq = 0;
    int maxFreq = 0;
    vector<int> result;

    void dfs(TreeNode* root){
        if(!root) return;

        dfs(root->left);

        if(currNum == root->val){
            currFreq++;
        }else{
            currNum = root->val;
            currFreq = 1;
        }

        if(currFreq > maxFreq){
            result = {};
            maxFreq = currFreq;
        }

        if(currFreq == maxFreq){
            result.push_back(root->val);
        }

        dfs(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return result;
    }
};