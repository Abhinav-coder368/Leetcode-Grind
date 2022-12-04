class Solution {
public:
    string frequencySort(string s) {
 map<char,int>mp;
 string ps;
 for(int i=0;i<s.size();i++){
    mp[s[i]]++;
 }
vector<pair<int,char>>p;
for(auto it:mp){
    p.push_back({it.second,it.first});
}
sort(p.rbegin(),p.rend());
for(int i=0;i<p.size();i++){
    int x=p[i].first;
    while(x--){
        ps+=p[i].second;
    }
}
return ps;
    }
};