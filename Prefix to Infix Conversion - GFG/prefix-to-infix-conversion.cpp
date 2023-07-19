//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string str) {
        // Write your code here
          stack<string>st;
        int len=str.length();
        for(int i=len-1;i>=0;i--)
        {
            if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
            {
                 string val1=st.top();
                st.pop();
                 string val2=st.top();
                st.pop();
                string val3='('+val1+str[i]+val2+')';
                st.push(val3);
            }
            else
            {
                st.push(string(1,str[i]));
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends