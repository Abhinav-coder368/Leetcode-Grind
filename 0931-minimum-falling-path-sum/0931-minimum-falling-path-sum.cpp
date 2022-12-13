class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
        int dp[n][m];
        for(int i=0;i<m;i++)
            dp[n-1][i]=matrix[n-1][i];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                dp[i][j]=matrix[i][j];
                int mn = dp[i+1][j];
                if(j+1<m)
                    mn = min(mn,dp[i+1][j+1]);
                if(j-1>=0)
                    mn = min(mn,dp[i+1][j-1]);
                dp[i][j]+=mn;
            }
        }
        int res = INT_MAX;
        for(int i=0;i<m;i++)
            res = min(dp[0][i],res);
        return res;
    }
};