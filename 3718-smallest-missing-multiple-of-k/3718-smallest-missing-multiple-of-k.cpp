class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=1;i<=1000;i++){
            int element = i*k;
            if(!st.count(element)){
                return element;
            }
        }
        return -1;
    }
};