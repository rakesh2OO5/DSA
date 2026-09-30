class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string ans = "";
        int n = strs.size();

        int size = min(strs[0].length(), strs[n - 1].length());

        for(int i = 0; i < size; i++) {
            if(strs[0][i] != strs[n - 1][i]) {
                break;
            }
            ans += strs[0][i];
        }

        return ans;
    }
};