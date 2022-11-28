//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	   vector<int> ans,res;
     int maxi = INT_MIN, sum = 0;
     for(int i = 0; i < n; i++){
         if(a[i] < 0) continue;
         while(i < n && a[i] >= 0){
             sum += a[i];
             ans.push_back(a[i]);
             i++;
         }
         if(sum > maxi){
            maxi = sum;
            res = ans;
         }
         sum = 0;
         ans.clear();
     }
    if(res.size() == 0) return {-1};
    return res;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends