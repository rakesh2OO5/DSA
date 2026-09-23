class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = accumulate(nums.begin(), nums.end(), 0) - x;

        int left = 0;
        int currSum = 0;
        int n = nums.size();
        int maxWindow = -1;

        for (int right = 0; right < n; right++) {
            currSum += nums[right];

            while (left <= right && currSum > target) {
                currSum -= nums[left];
                left++;
            }

            if (currSum == target) {
                maxWindow = max(maxWindow, right - left + 1);
            }
        }

        return maxWindow == -1 ? -1 : (n - maxWindow);
    }
};