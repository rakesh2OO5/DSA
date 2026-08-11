class Solution {
public:
    long long countSubstrings(string s, char c) {
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        long long n = freq[c-'a'];
        return n * (n+1) / 2;
    }
};