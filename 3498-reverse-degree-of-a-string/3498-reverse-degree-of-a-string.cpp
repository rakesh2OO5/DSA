class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int idx = 1;
        for(char ch = 'z';ch>='a';ch--){
            mp[ch] = idx++;
        }
        int sum = 0;
        int i = 1;
        for(char c:s){
            sum+= mp[c] * i;
            i++;
        }
        return sum;
    }
};