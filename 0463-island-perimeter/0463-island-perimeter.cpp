class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] ==1){
                    ans+=4;
                    if(   i+1 <m  && grid[i+1][j] == 1  )  // if down neighbour is there
                          ans--;
                    if(   i-1 >=0 && grid[i-1][j] == 1 ) // if upward neighbour is there  
                          ans--;
                    if(   j-1>=0  && grid[i][j-1] == 1)  // if left neighbour is there
                          ans--;
                    if(  j+1<n && grid[i][j+1] == 1 ) // if right neighbour is there
                          ans--;
                }
                    
            }
        }
        return ans;
    }
};