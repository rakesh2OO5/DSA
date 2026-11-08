class Solution {
public:
    bool isPalindrome(int x) {
        long long originalNumber = x;
        long long reverseNumber = 0;
        while(x>0){
            long long digit = x % 10;
            reverseNumber =( reverseNumber * 10 ) + digit ;
            x /= 10;
        }
        if(originalNumber == reverseNumber) 
            return true;
        else
            return false;
    }
};