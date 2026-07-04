class Solution {
public:
    bool isPalindrome(string s) {
        string refined = "";
        for(char c:s){
            char ch = tolower(c);
            if(isalnum(ch)) refined+=ch;
        }
        int low = 0;
        int high = refined.size()-1;
        while(low<high){
            if(refined[low]!=refined[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
};