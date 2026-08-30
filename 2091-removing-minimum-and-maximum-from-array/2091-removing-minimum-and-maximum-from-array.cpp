class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minEle = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxEle = max_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(minEle, maxEle);
        int right = max(minEle, maxEle);

        return min({
            left + 1 + n - right,  
            right + 1,             
            n - left             
        });
    }
};