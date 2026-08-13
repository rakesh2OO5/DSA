class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int,char> mp;
        for(int i=0;i<s.length();i++){
            mp[indices[i]] = s[i];
        }
        string res = "";
        sort(indices.begin(),indices.end());
        for(int i=0;i<indices.size();i++){
            res+=mp[indices[i]];
        }
        return res;
    }
};