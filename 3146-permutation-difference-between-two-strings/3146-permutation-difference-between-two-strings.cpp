class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> mpT;
        unordered_map<char,int> mpS;
        int idxS = 0;
        for(char c:s){
            mpS[c] = idxS++;
        }
        int idxT = 0;
        int sum = 0;
        for(char c:t){
            mpT[c] = idxT++;
            sum+= abs(mpS[c]-mpT[c]);
        }

        return sum;
    }
};