//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
         int start = 0;
        while (start < n) {
            int groupSize = min(k, n - start);
            reverse(arr.begin() + start, arr.begin() + start + groupSize);
            start += k;
        }
        
        //  for(int i=0;i<n;i=i+k)
        // {
        //     int start=i;
        //     int end=start+k-1;
        //     if(end>=n)
        //     {
        //         end=n-1;
        //     }
        //     while(start<end)
        //     {
        //         swap(arr[start],arr[end]);
        //         start++;
        //         end--;
        //     }
        // }   
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends