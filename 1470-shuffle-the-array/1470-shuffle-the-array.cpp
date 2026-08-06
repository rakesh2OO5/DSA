class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> firstHalf;
        vector<int> secondHalf;
        for(int i=0;i<n;i++){
            firstHalf.push_back(nums[i]);
        }
        for(int i=n;i<nums.size();i++){
            secondHalf.push_back(nums[i]);
        }
        vector<int> result(nums.size());
        int fIdx = 0;
        int sIdx = 1;
        for(int i=0;i<n;i++,fIdx=fIdx+2,sIdx=sIdx+2){
            result[fIdx] = firstHalf[i];
            result[sIdx] = secondHalf[i];
        }
        return result;
    }
};