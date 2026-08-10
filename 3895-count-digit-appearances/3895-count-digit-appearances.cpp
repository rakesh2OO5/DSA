class Solution {
public:
    int countDigit(int n,int digit){
        int count = 0;
        while(n>0){
            int d = n%10;
            if(d == digit )
                count++;
            n/=10;
        }
        return count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for(int num:nums){
            ans+=countDigit(num,digit);
        }
        return ans;
    }
};