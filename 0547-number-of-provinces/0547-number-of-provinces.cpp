class Solution {
public:
    void dfs(vector<int> adjLs[], vector<bool>& vis, int node){
        vis[node] = true;
        
        for(auto  it : adjLs[node]){
            if(!vis[it])
                dfs(adjLs,vis,it);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected[0].size();
        
        vector<int> adjLs[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j] == 1 and i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        
        
        vector<bool> vis(n);
        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(adjLs,vis,i);
            }
        }
        return cnt;
    }
};