class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(),m=grid[0].size(),cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]<0) cnt++;
            }
        }
        return cnt;
    }
};