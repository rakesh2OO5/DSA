class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<char,int> mp;
        for(char c:stones){
            mp[c]++;
        }
        for(char c:jewels){
            count+=mp[c];
        }
        return count;
    }
};