//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    map<char,int> mp;
    string ans = "-1";
    for(auto i : s){
        if(mp.find(i) == mp.end()){
            mp[i]++;
        }else{
           ans = i;
            break;
        }
    }
    return ans;
}