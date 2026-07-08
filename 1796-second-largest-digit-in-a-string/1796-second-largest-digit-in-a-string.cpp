class Solution {
public:
    int secondHighest(string s) {
        vector<int> nums;
        for(char c:s){
            if(isdigit(c)){
                nums.push_back(c-'0');
            }
        }  

        long first = LLONG_MIN;
        long second = LLONG_MIN;
        for(int num:nums){
            if(num==first||num==second) 
                continue;
            
            if(num > first){
                second = first;
                first = num;
            }else if(num>second){
                second = num;
            }
        }
        return (second==LLONG_MIN) ? -1 : second;
    }
};