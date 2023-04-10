class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>>& image,int newcolor,int delrow[],int delcol[],int inicolor){
        ans[row][col] =  newcolor;
        int n = image.size();
        int m=  image[0].size();
        
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and image[nrow][ncol] == inicolor and ans[nrow][ncol] != newcolor){
                dfs(nrow,ncol,ans,image,newcolor,delrow,delcol,inicolor);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, 
                                  int color) {
        int inicolor = image[sr][sc];
        vector<vector<int>> ans = image;
        
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,delrow,delcol,inicolor);
        return ans;
    }
};