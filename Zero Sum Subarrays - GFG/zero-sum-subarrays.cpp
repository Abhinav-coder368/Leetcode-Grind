//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &nums, int n ) {
        // long long n = nums.size();
        
        if(n == 0)
            return 0;
        
        unordered_map<int, int> m;
        
        long long i = 0, currSum = 0;
        
        long long count = 0; // to store number of subarrays
        
        while(i < n)
        {
            currSum += nums[i];
            
            if(currSum == 0)
                count += 1;
            
            if(m.find(currSum - 0) != m.end())
                count += m[currSum - 0];
            
            m[currSum] += 1;
            i++;            
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends