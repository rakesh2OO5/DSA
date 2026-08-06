class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(char c:address){
            if(!isalnum(c)){
                result+="[.]";
            }else{
                result+=c;
            }
        }
        return result;
    }
};