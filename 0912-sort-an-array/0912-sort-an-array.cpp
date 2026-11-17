class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int minEle = *min_element(nums.begin(),nums.end());
        int maxEle = *max_element(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int idx=0;
        for(int i=minEle;i<=maxEle;i++){
            while(mp[i]>0){
                nums[idx] = i;
                idx++;
                mp[i]--;
            }
        }
        return nums;
    }
};