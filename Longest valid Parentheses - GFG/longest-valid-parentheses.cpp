//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
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

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends