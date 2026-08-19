class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        auto myComparator = [&freq](int a, int b){
            if(freq[a]==freq[b]){
                return a > b;
            }
            return freq[a] < freq[b];
        };
        sort(nums.begin(),nums.end(),myComparator);
        return nums;
    }
};