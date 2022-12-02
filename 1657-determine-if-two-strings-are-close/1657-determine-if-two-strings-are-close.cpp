class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> ans1(26,0), ans(26,0);
        set<char> st,st2;
        for(char c : word1){
            ans1[c-'a']++;
            st.insert(c);
        }
        for(char c : word2){
            ans[c-'a']++;
            st2.insert(c);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans.begin(),ans.end());
        
        return ans1==ans && st2==st;
            
    }
};