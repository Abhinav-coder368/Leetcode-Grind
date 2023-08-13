//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int f(int ind,vector<int> &arr,vector<int> &dp){
	    if(ind == 0) return arr[ind];
	    if(ind < 0) return 0;
	    
	    if(dp[ind] != -1) return dp[ind];
	    
	    int pick = arr[ind] + f(ind-2,arr,dp);
	    int notpick = 0 + f(ind-1,arr,dp);
	    
	    return dp[ind] = max(pick,notpick);
	}
	
	int findMaxSum(vector<int>&arr, int n) {
	    // code here
	    vector<int> dp(n,-1);
	    return f(n-1,arr,dp);
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends