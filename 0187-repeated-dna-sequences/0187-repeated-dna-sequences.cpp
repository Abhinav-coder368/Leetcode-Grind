class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        vector<string> v;
        string ans = "";
        for(int i=0;i<s.size();i++){
            string str= s.substr(i,10);
            mp[str]++;
        }
        for( auto it : mp){
            if(it.second >= 2)
                v.push_back(it.first);
        }
        return v;
    }
};