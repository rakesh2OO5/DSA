class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0){
            return {};
        }

        set<int> s(arr.begin(),arr.end());

        int rank = 1;
        unordered_map<int,int> ranks;
        for(int ele : s){
            ranks[ele] = rank++;
        }


        vector<int> ans;
        for(int ele: arr){
            ans.push_back(ranks[ele]);
        }
        return ans;
    }
};