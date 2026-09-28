class Solution {
public:
    int maxDepth(string s) {
        int maxdepth = 0;
        stack<char> st;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }else if(c==')'){
                int currDepth = st.size();
                maxdepth = max(maxdepth,currDepth);
                st.pop();
            }
        }
        return maxdepth;
    }
};