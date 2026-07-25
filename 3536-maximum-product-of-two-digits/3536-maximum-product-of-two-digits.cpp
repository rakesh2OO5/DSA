class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while(n>0){
            int digit = n%10;
            digits.push_back(digit);
            n/=10;
        }
        int first= 0;
        int second = 0;
        for(int digit : digits){
            if(digit > first){
                second=first;
                first=digit;
            }
            else if(digit > second){
                second = digit;
            }
        }
        return first * second;
    }
};