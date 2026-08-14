class Solution {
public:
    string sortSentence(string s) {
        vector<string> result(10);
        stringstream ss(s);
        string word;
        while(ss >> word){
            int lastIdx = word.length() - 1;
            int num = word[lastIdx] - '0';
            result[num] = word.substr(0, lastIdx);
        }
        string ans = "";
        for(int i = 1; i <= 9; i++){
            if(result[i] != ""){
                if(!ans.empty())
                    ans += " ";
                ans += result[i];
            }
        }
        return ans;
    }
};