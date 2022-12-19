class Solution {
public:
    static bool cmp(pair<int ,int>&a,pair<int,int>&b){
        if(a.second==b.second)
           return a.first>b.first;
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        for(auto i : nums)
            mp[i]++;
        vector<pair<int,int>> p;
        for(auto it : mp){
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),cmp);
        
        // for(int i=0;i<p.size();i++){
        //     cout<<p[i].first<<" "<<p[i].second<<endl;
        // }
        for(auto it : p){
            while(it.second--){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};