class Solution {
public:
    bool isDivisible(int n,int t){
        int prod = 1;
        while(n>0){
            int digit = n%10;
            prod*=digit;
            n/=10;
        }
        if(prod%t==0)
            return true;
        else
            return false;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            if(isDivisible(i,t))
                return i;
        }
        return 0;
    }
};