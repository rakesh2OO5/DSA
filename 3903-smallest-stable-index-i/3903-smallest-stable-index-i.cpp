class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int maxx = INT_MIN;
            int minn = INT_MAX;
            for(int j=0;j<=i;j++){
                maxx = max(maxx,nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                minn = min(minn,nums[j]);
            }
            if(maxx-minn<=k)
                return i;
        }
        return -1;
    }
};