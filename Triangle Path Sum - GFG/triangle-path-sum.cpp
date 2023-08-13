//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int minimumPathSumUtil(int i, int j, vector<vector<int> > &triangle,int n, vector<vector<int> > &dp) {
  
  if(dp[i][j]!=-1)
  return dp[i][j];
  
  if(i==n-1) return triangle[i][j];
    
  int down = triangle[i][j]+minimumPathSumUtil(i+1,j,triangle,n,dp);
  int diagonal = triangle[i][j]+minimumPathSumUtil(i+1,j+1,triangle,n,dp);
  
  return dp[i][j] = min(down, diagonal);
  
}

    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
    vector<vector<int> > dp(n,vector<int>(n,-1));
        return minimumPathSumUtil(0,0,triangle,n,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends