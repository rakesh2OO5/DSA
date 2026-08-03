class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        int left = 0;
        int right = n-1;
        sort(nums.begin(),nums.end());
        while(left < right){
            if(nums[left]+nums[right]<target){
                count+=(right-left);
                left++;
            }else 
                right--;
        }
        return count;
    }
};