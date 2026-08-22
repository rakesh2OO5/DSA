class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum = 0;
        int digitProd = 1;
        int copy = n;
        while(n>0){
            digitSum+=n%10;
            digitProd*=n%10;
            n/=10;
        }
        int sum = digitSum + digitProd;
        return  copy%sum == 0;
    }
};