class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll = 0;
        for(long long num:nums){
            xorAll^=num;
        }
        int firstUnique = 0;
        int secondUnique = 0;
        long long mask = xorAll & -xorAll;
        for(long long num:nums){
            if(num & mask){
                firstUnique^=num;
            }else{
                secondUnique^=num;
            }
        }
        return  {firstUnique,secondUnique};
    }
};