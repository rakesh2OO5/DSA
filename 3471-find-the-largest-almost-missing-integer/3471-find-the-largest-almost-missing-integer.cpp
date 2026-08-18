class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) {
            vector<int> freq(51, 0);
            for (int num : nums)
                freq[num]++;
            int ans = -1;
            for (int num : nums) {
                if (freq[num] == 1)
                    ans = max(ans, num);
            }
            return ans;
        }

        if (k == n)
            return *max_element(nums.begin(), nums.end());
        int ans = -1;
        if (count(nums.begin(), nums.end(), nums[0]) == 1)
            ans = max(ans, nums[0]);
        if (count(nums.begin(), nums.end(), nums[n - 1]) == 1)
            ans = max(ans, nums[n - 1]);
        return ans;
    }
};