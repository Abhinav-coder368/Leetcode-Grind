class Solution {
public:
    static bool cmp(pair<int,int> &a,pair<int,int> &b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> ans;
        int cnt=1;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        vector<pair<int,int>> res;
        for(auto it : mp) res.push_back(it);
        sort(res.begin(),res.end(),cmp);
        for(auto it : res){
            if(cnt<=k){
                ans.push_back(it.first);
                cnt++;
            }
        }
        return ans;
    }
};