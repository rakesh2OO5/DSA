class Solution {
public:
    int minPartitions(string n) {
        int maxx = 0;
        for(char c:n){
            int digit = c - '0';
            maxx = max(maxx,digit);
        }
        return maxx;
    }
};