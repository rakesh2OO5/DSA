class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int ans = 0;

        for (int num : nums) {
            if (num == 1)
                counter++;
            else
                counter = 0;

            ans = max(ans, counter);
        }

        return ans;
    }
};