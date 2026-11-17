
class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;

        long double base = x;
        if(exp < 0) {
            exp = -exp;
            base = 1.0L / base;
        }

        long double res = 1.0L;

        while(exp > 0) {
            if(exp % 2 != 0) {
                res *= base;
            }

            base *= base;
            exp /= 2;
        }

        return (double)res;
    }
};
