class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest = *min_element(nums.begin(), nums.end());
        int biggest = *max_element(nums.begin(), nums.end());

        unordered_set<int> s(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = smallest; i <= biggest; i++) {
            if (!s.count(i))
                ans.push_back(i);
        }

        return ans;
    }
};