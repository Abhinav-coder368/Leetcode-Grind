class Solution {
    private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>>&grid,
            int delrow[],int delcol[],int &shape) {
      // mark it visited
      
  }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        // create visited array and initialise to 0
        vector<vector<int>> vis(n, vector<int>(m, 0)); 
        int cnt,res = INT_MIN; 
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        int ans = 0;
        
        for(int row = 0; row < n ; row++) {
            
            for(int col = 0; col < m ;col++) {
                // if not visited and is a land
               
                if(!vis[row][col] && grid[row][col] == 1) {
                    int shape = 0;
                    vis[row][col] = 1; 
      queue<pair<int,int>> q;
      // push the node in queue
      q.push({row, col}); 
      int n = grid.size(); 
      int m = grid[0].size(); 
      
      // until the queue becomes empty
      while(!q.empty()) {
          int row = q.front().first; 
          int col = q.front().second; 
          q.pop(); 
          shape++;
          // traverse in the neighbours and mark them if its a land 
          for(int i=0;i<4;i++){
                  int nrow = row + delrow[i]; 
                  int ncol = col + delcol[i]; 
                  // neighbour row and column is valid, and is an unvisited land
                  if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                  && grid[nrow][ncol] == 1 && !vis[nrow][ncol]) {

                      vis[nrow][ncol] = 1; 
                      q.push({nrow, ncol}); 
                  }
              
          }
      } 
                ans = max(ans,shape);    
    }
                
            }
        }
return ans;
    }
};