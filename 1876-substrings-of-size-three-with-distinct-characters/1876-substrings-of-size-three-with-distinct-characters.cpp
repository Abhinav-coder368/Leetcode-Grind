class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char,int> st;
        int wstart=0,wend=0,cnt=0;
        for(wstart=0;wstart<s.size();wstart++){
            st[s[wstart]]++;
            if(wstart-wend+1==3){
                if(st.size()==3){
                   
                    cnt++;
                }
                st[s[wend]]--;
                if(st[s[wend]]==0){
                    st.erase(s[wend]);
                }
                wend++;
            }
        }
        return cnt;
    }
};