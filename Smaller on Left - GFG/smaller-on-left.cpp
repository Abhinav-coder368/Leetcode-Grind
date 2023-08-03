//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}
// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
{
    
     vector<int> ans(n);
     set<int> st;
     for(int i=0;i<n;i++){
         auto it = st.lower_bound(arr[i]);
         if(it == st.begin()){
             ans[i] = -1;
         }
         else{
             it--;
             ans[i] = *it;
         }
         st.insert(arr[i]);
     }
     return ans;
}