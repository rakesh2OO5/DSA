class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // value -> index

        for(int i = 0; i < nums.size(); i++) {
            int numToFind = target - nums[i];

            if(mp.find(numToFind) != mp.end()) {
                return {mp[numToFind], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};