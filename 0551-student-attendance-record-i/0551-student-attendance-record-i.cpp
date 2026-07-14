class Solution {
public:
    bool checkRecord(string s) {
         int absent = 0;

        for (char c : s) {
            if (c == 'A')
                absent++;
        }

        if(s.contains("LLL")||absent>1){
            return false;
        }
        
        return true;
    }
};