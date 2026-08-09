class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        string s = bitset<16>(n).to_string();
        int right = s.length()-1;
        int left = 0;
        while(left<right){
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};