//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int M = 1e9+7;

	public:
	int f(int ind, int sum,int nums[],vector<vector<int>> &dp){
	   
	   
	   //if(sum < 0 ) return 0;
	   if(ind<0){
	       
	       
	       if(sum==0) return 1;
	       return 0;
	       
	   }
	
	    if(dp[ind][sum] != -1) return dp[ind][sum];
	   
	   //if(ind == 0){
	       
	   //    if(sum == 0) return nums[0] == sum;
	   //    else return 0;
	       
	   //}
	   
	   //if(sum == 0) return 1;
	    
	    int take = 0;
	    if(nums[ind] <= sum)
	       take = f(ind-1,sum-nums[ind],nums,dp);
	       
	   int notTake = f(ind-1,sum,nums,dp);
	       
	    return dp[ind][sum] =  (take+notTake)%M;
	}

	int perfectSum(int arr[], int n, int sum)
	{
	    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        int ans = f(n-1,sum,arr,dp);
        
        return ans%M;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends