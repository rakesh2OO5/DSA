class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        sort(nums.begin(), nums.end());
        double ans = DBL_MAX;
        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;
            ans = min(ans, avg);
            left++;
            right--;
        }
        return ans;
    }
};