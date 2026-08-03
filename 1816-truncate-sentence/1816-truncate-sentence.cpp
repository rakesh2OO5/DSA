class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string ans = "";
        string word;
        while(ss >> word && k>0){
            ans+=word+" ";
            k--;
        }
        return ans.substr(0,ans.length()-1);
    }
};