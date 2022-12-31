class Solution {
    int endx, endy, m, n, nonObstacles;

    int dfs(int i, int j, int curVisited, vector<vector<int>> &vis, vector<vector<int>> &grid)
    {
        if(i == endx && j == endy)
        {
            return curVisited == nonObstacles + 1;
        }

        vis[i][j] = 1;

        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        int ans = 0;
        for(int k = 0;k<4;k++)
        {
            int newx = i + dx[k];
            int newy = j + dy[k];

            if(newx >= 0 && newy >= 0 && newx < m && newy < n && !vis[newx][newy] && grid[newx][newy] != -1)
            {
                ans += dfs(newx, newy, curVisited + 1, vis, grid);
            }
        }

        vis[i][j] = 0;
        return ans;
    }

public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        //keep track of non obstacle
        m = grid.size();
        n = grid[0].size();

        nonObstacles = 0;
        int startx, starty;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                switch(grid[i][j])
                {
                    case 1:
                        startx = i;
                        starty = j;
                        break;

                    case 2:
                        endx = i;
                        endy = j;
                        break;
                    
                    case 0:
                        nonObstacles++;
                        break;
                }
            }
        }
        cout<<nonObstacles;
        int curVisited = 0;
        vector<vector<int>> vis(m, vector<int> (n, 0));

        return dfs(startx, starty, curVisited, vis, grid);
    }
};