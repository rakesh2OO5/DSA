class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> cfreq(26,0);
        vector<int> vfreq(26,0);
        for(char c : s){
            if(c == 'a' || c== 'e' || c=='i' || c=='o' || c=='u'){
                vfreq[c-'a']++;
            }else{
                cfreq[c-'a']++;
            }
        }
        int cmax = *max_element(cfreq.begin(),cfreq.end());
        int vmax = *max_element(vfreq.begin(),vfreq.end());
        return cmax+vmax;
    }
};