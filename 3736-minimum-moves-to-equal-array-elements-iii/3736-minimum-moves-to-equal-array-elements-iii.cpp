class Solution {
public:
    int minMoves(vector<int>& nums) {
        int result = 0;
        int maxi = *max_element(nums.begin(),nums.end());
        for(int num:nums){
            result+=abs(num-maxi);
        }
        return result;
    }
};