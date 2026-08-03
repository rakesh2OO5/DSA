class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int mini = *min_element(nums.begin(),nums.end());
            int idx = find(nums.begin(),nums.end(),mini) - nums.begin();
            nums[idx] *= multiplier;
        }
        return nums;
    }
};