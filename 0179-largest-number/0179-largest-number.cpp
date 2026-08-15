class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto myComparator = [](int a, int b) {
            string x = to_string(a);
            string y = to_string(b);
            return (x + y) > (y + x);
        };
        sort(nums.begin(), nums.end(), myComparator);
        if (nums[0] == 0)
            return "0";
        string result = "";
        for (int num : nums) {
            result += to_string(num);
        }
        return result;
    }
};