class Solution {
public:
    int reverseDigits(int n){
        int reverse = 0;
        while(n>0){
            int digit = n%10;
            reverse = reverse * 10 + digit;
            n/=10;
        }
        return reverse;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for(int i=0;i<n;i++){
            result[i]=reverseDigits(nums[i]);
        }
        nums.insert(nums.end(),result.begin(),result.end());
        unordered_set<int> st(nums.begin(),nums.end());
        return st.size();
    }
};