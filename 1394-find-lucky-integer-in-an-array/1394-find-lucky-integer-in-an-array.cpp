class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int num:arr){
            mp[num]++;
        }

        int maxx = -1;
        
        for(auto it:mp){
            if(it.first == it.second){
            maxx = max(maxx, it.first);
            }
        }

        return maxx;
    }
};