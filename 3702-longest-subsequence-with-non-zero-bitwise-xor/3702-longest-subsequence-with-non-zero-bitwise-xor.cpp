class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xorSum = 0;
        bool hasNonZero = false;
        for (int num : nums) {
            xorSum ^= num;
            if (num != 0)
                hasNonZero = true;
        }
        if (xorSum != 0)
            return n;
        if (!hasNonZero)
            return 0;
        return n - 1;
    }
};