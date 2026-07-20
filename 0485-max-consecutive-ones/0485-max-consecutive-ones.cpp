class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int counter=0;
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                counter++;
            }else{
                counter=0;
            }
            ans=max(ans,counter);
        }
        return ans;
    }
};