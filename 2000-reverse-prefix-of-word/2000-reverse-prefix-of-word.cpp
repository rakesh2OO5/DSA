class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch)+1;
        reverse(word.begin(),word.begin()+idx);
        return word;
    }
};