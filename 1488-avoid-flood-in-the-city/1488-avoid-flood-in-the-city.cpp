// https://www.youtube.com/watch?v=SPmBfO6ov5I
Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        unordered_map<int,int> mp;
        set<int> st;
        vector<int> ans(n,1);
        
        for(int i=0;i<n;i++){
            if(rains[i]==0) st.insert(i);
            else{
                ans[i]=-1;
                if(mp.count(rains[i]) > 0){
                    int rainDay = mp[rains[i]];
                    auto it = st.lower_bound(rainDay);
                    
                    if(it != st.end()){
                        ans[*it] = rains[i];
                        st.erase(it);
                    }
                    else
                        return {};
                }
                mp[rains[i]] = i;
            }
            
        }
        return ans;
        
    }
};
