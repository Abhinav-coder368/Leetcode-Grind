class Solution {
public:
    static bool cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        int maxfreq=0;
        string ans = "";
        map<char,int> mp;
        for(char c : s)
            mp[c]++;
        
        vector<pair<char,int>>res;
        for(auto it:mp) res.push_back(it);
        sort(res.begin(),res.end(),cmp);
        for(auto it : res){
                int x = it.second;
                while(x--)
                  ans+=it.first;   
            }
        
        
        return ans;
    }
};