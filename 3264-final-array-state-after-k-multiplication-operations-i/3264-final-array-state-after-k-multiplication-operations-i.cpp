class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int mini = *min_element(nums.begin(),nums.end());
            auto idx = find(nums.begin(),nums.end(),mini);
            *idx *= multiplier;
        }
        return nums;
    }
};