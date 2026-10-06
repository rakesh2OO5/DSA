class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        long double base = x;
        long double res = 1.0;
        if (exp < 0) {
            exp = -exp;
            base = 1.0 / base;
        }
        while (exp > 0) {
            if (exp % 2 == 1) {
                res *= base;
            }

            base *= base;
            exp /= 2;
        }
        return (double)res;
    }
};