class Solution {
public:
    long long sumAndMultiply(int n) {
        long long newNum = 0;
        long long unit = 1;
        long long sum = 0;
        while(n>0){
            long long digit = n%10;
            sum+=digit;
            if(digit!=0){
                newNum+=digit*unit;
                unit*=10;
            }
            n/=10;
        }
        long long ans = newNum * sum;
        return ans;
    }
};