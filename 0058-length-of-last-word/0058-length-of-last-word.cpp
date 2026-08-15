class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = s.find_last_not_of(' ') + 1;
        s.erase(idx);

        int lastIdx = s.find_last_of(' ');

        return lastIdx == string::npos ? s.length() : s.length() - lastIdx - 1;
    }
};