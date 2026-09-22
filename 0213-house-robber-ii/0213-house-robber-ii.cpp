class Solution {
public:
    int robHelper(vector<int> arr){
        int n = arr.size();
        vector<int> dp(n);
        dp[0] = arr[0];
        dp[1] = max(arr[0],arr[1]);
        for(int i = 2;i<n;i++){
            dp[i] = max(dp[i-2]+arr[i],dp[i-1]);
        }
        return dp[n-1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        vector<int> skipFirstHouse(n);
        vector<int> skipLastHouse(n);
        for(int i=0;i<n-1;i++){
            skipLastHouse[i] = nums[i];
            skipFirstHouse[i] = nums[i+1];
        }

        int skipLastLoot = robHelper(skipLastHouse);
        int skipFirstLoot = robHelper(skipFirstHouse);

        return max(skipLastLoot,skipFirstLoot);
    }
};