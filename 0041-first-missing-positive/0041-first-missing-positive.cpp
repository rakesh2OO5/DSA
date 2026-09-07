class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 1; i <= n; i++) {
            if(st.count(i) == 0)
                return i;
        }
        return n + 1;
    }
};