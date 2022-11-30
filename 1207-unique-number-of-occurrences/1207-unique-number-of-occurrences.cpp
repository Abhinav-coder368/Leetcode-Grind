class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         map<int,int> mp;
        int ans;
        set<int> st;
         for(int i=0;i<arr.size();i++)
             mp[arr[i]]++;
         for(auto it : mp){
               ans = it.second;
               st.insert(ans);
         }
        if(st.size()==mp.size())
            return true;
        return false;
    }
};