class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int i = 1;
        for(char ch = 'z';ch>='a';ch--){
            mp[ch] = i++;
        }
        int sum = 0;
        int idx = 1;
        for(char c:s){
            sum+=mp[c] * idx++;
        }
        return sum;
    }
};