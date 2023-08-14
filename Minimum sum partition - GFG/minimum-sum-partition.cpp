//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  
  int ans = INT_MAX;
  
 int solve(int idx, int arr[], int sum1, int sum, int n, vector<vector<int>>&dp){
     
     
     if(idx == n){
         
         ans = min(ans,abs(sum-sum1));
         
         return ans;
     }
     
     if(sum<0 or sum1<0) return INT_MAX;
     
     if(dp[idx][sum]!=-1) return dp[idx][sum];
     
     
    int take = solve(idx+1, arr, sum1+arr[idx], sum-arr[idx], n, dp);
     int notTake = solve(idx+1, arr, sum1, sum, n, dp);
     
     return dp[idx][sum] = min(take,notTake);
     
     
 }
  
  
  
	int minDifference(int arr[], int n)  { 
	   
	   int sum = 0;
	   
	   for(int i=0; i<n; i++){
	       
	       sum += arr[i]; 
	       
	   }
	   
	   
	   vector<vector<int>>dp(n,vector<int>(sum+1,-1));
	   
	  
	   
   return	 solve(0, arr, 0, sum, n, dp);
	   
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends