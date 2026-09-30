class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        int maxNormal = INT_MIN;
        int currNormal = 0;

        int maxInverted = INT_MIN;
        int currInverted = 0;

        for(int num : nums) {
            // Normal Kadane
            currNormal += num;
            maxNormal = max(maxNormal, currNormal);

            if(currNormal < 0) {
                currNormal = 0;
            }

            // Inverted Kadane
            num = -num;
            currInverted += num;
            maxInverted = max(maxInverted, currInverted);

            if(currInverted < 0) {
                currInverted = 0;
            }
        }

        // All elements are negative
        if(maxNormal < 0) {
            return maxNormal;
        }

        return max(maxNormal, totalSum + maxInverted);
    }
};