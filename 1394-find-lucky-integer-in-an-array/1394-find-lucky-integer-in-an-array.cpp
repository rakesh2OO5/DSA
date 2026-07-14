class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int num:arr){
            mp[num]++;
        }

        int currMax = -1;
        int maxx = INT_MIN;
        
        for(auto it:mp){
            if(it.first == it.second){
                currMax = it.first;
            }
            maxx = max(maxx,currMax);
        }

        return maxx;
    }
};