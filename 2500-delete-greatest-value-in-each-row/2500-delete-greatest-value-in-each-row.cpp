class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        sort(grid[i].begin(), grid[i].end());
        int ans=INT_MIN,res=0;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                 ans = max(ans,grid[j][i]);
            }
            res+=ans;
        }
         return res;
    }
       
    
};