class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int n = s.length();
        int maxLen = 0;
        int left = 0;
        for(int right = 0;right<n;right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};