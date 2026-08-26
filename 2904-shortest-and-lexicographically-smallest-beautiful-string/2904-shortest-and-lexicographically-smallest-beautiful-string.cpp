class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i = 0;
        int ones = 0;
        string result = "";

        for (int j = 0; j < n; j++) {
            if (s[j] == '1')
                ones++;

            while (ones > k) {
                if (s[i] == '1')
                    ones--;
                i++;
            }

            // Remove leading zeroes
            while (i <= j && s[i] == '0') {
                i++;
            }

            // Exactly k ones
            if (ones == k) {
                string temp = s.substr(i, j - i + 1);

                if (result.empty() ||
                    temp.length() < result.length() ||
                    (temp.length() == result.length() && temp < result)) {
                    result = temp;
                }
            }
        }

        return result;
    }
};