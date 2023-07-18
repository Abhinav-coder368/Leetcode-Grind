//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
         stack<int> idx;
        int ans=0;
        idx.push(-1);
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='(')
                idx.push(i);
 
            else
            {
                idx.pop();
                if(idx.size()==0)
                    idx.push(i);
 
                else
                {
                    ans=max(ans,i-idx.top());
                }
            }
        }
 
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends