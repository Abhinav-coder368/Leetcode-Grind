class Solution {
public:
    int countPoints(string rings) {
        
        // for(int i=0;i<rings.size();i++)
        //     cout<<rings[i];
        map<char,vector<char>> mp;
        for(int i=0;i<rings.size()-1;i++){
            mp[rings[i+1]].push_back(rings[i]);
            i++;
        }
int cnt=0;
        for(auto it  : mp){
        set<char>st;
            for(auto i:it.second){
                st.insert(i);
            }
            if(st.size()==3)  cnt++;
        }
       
 
        return cnt;
    }
};