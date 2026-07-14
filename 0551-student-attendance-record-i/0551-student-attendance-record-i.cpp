class Solution {
public:
    bool checkRecord(string s) {
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'A']++;
        }
        if(s.contains("LLL")||freq[0]>1){
            return false;
        }
        return true;
    }
};