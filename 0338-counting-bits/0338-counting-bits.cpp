class Solution {
public:

    int counter(int n){
        int count = 0;
        while(n>0){
            if((n&1)==1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for(int i=0;i<=n;i++){
            res[i] = counter(i);
        }

        return res;
    }
};