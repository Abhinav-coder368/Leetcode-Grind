//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        int mod = 1000000007;
        
        int prev = 1, prev2 = 0,curr;
        
        for(int i=2;i<=n;i++){
            curr = prev% mod + prev2% mod;
            prev2 = prev% mod;
            prev = curr% mod;
            
        }
        return curr % mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends