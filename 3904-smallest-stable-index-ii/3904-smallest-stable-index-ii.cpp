class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minElements(n);
        int minEle = INT_MAX;
        for(int i=n-1;i>=0;i--){
            minEle = min(minEle,nums[i]);
            minElements[i] = minEle;
        }

        int maxele = INT_MIN;
        for(int i=0;i<n;i++){
            maxele = max(maxele,nums[i]);

            if(maxele - minElements[i] <= k){
                return i;
            }
        }
        return -1;
    }
};