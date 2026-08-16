class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string mx = s;
        int idx = mx.find_first_not_of('9');
        if (idx != string::npos) {
            char ch = mx[idx];
            replace(mx.begin(), mx.end(), ch, '9');
        }

        string mn = s;
        idx = mn.find_first_not_of('0');
        if (idx != string::npos) {
            char ch = mn[idx];
            replace(mn.begin(), mn.end(), ch, '0');
        }
        return stoi(mx) - stoi(mn);
    }
};