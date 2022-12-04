class Solution {
public:
    // static bool cmp(pair<char,int>&a,pair<char,int>&b){
    //     return a.second>b.second;
    // }
    string frequencySort(string s) {
       
        string ans = "";
        map<char,int> mp;
        for(char c : s)
            mp[c]++;
        
        vector<pair<int,char>>res;
        for(auto it:mp) res.push_back({it.second,it.first});
        sort(res.rbegin(),res.rend());
        for(auto it : res){
                int x = it.first;
                while(x--)
                  ans+=it.second;   
            }
        
        
        return ans;
    }
};