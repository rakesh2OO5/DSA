class Solution {
public:
    string convertDateToBinary(string date) {
        return convert(date.substr(0,4)) + "-" +
               convert(date.substr(5,2)) + "-" +
               convert(date.substr(8,2));
    }

private:
    string convert(string s) {
        string bin = bitset<16>(stoi(s)).to_string();
        return bin.substr(bin.find('1'));
    }
};