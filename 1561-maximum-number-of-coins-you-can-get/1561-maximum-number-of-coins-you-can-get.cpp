class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int rounds = n / 3;
        int ans = 0;
        int j = n - 2;  
        while (rounds--) {
            ans += piles[j];
            j -= 2;
        }
        return ans;
    }
};