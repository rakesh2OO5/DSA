class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=1;i<s.length();i++){
            int diff = abs(int(s[i-1])-int(s[i]));
            sum+=diff;
        }
        return sum;
    }
};