class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";

        int i = 0;

        while(i < chars.size()) {
            char ch = chars[i];
            int count = 0;

            while(i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }

            s += ch;

            if(count > 1) {
                s += to_string(count);
            }
        }

        for(int i = 0; i < s.length(); i++) {
            chars[i] = s[i];
        }

        return s.length();
    }
};