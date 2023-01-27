class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> mp;
        set<int> st;
        for(auto it : s){
            mp[it]++;
        }
        for(auto it : mp){
            int x = it.second;
            st.insert(x);
        }
        if(st.size() == 1 ) return true;
        return false;
    }
};