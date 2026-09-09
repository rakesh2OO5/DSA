class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sfreq(26,0);
        vector<int> tfreq(26,0);
        for(char c:s){
            sfreq[c-'a']++;
        }
        for(char c:t){
            tfreq[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(sfreq[i]!=tfreq[i]){
                return false;
            }
        }
        return true;
    }
};