class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(101,0);
        for(int num:nums){
            freq[num]++;
        }
        int count = 0;
        for(int f:freq){
            count+=(f * (f-1)) /2;
        }
        return count;
    }
};