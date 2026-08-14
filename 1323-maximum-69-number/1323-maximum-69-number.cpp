class Solution {
public:
    int maximum69Number(int num) {
        vector<int> numbers;
        while(num > 0){
            int digit = num % 10;
            numbers.push_back(digit);
            num /= 10;
        }
        for(int i = numbers.size() - 1; i >= 0; i--){
            if(numbers[i] == 6){
                numbers[i] = 9;
                break;
            }
        }
        int unit = 1;
        int ans = 0;
        for(int i = 0; i < numbers.size(); i++){
            ans += numbers[i] * unit;
            unit *= 10;
        }
        return ans;
    }
};