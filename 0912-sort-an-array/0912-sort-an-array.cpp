class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int minE = *min_element(nums.begin(),nums.end());
        int maxE = *max_element(nums.begin(),nums.end());
        int idx = 0;
        for(int num = minE ; num <= maxE ;num++){
            while(mp[num]>0){
                nums[idx] = num;
                idx++;
                mp[num]--;
            }
        }
        return nums;
    }
};