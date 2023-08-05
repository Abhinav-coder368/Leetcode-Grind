//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
        // code here
        // int trap (vector<int>& height) {
        if(n<=2)
            return 0;
        long long maxLeft = height [0];
        long long maxRight = height[n-1];
        long long trappedWater = 0;
        long long left = 1; //Left pointer
        long long right = n-2; //Right pointer
        
        while(left <=right) {
            if(maxLeft<maxRight) {
                if(height [left] >=maxLeft)
                    maxLeft = height [left];
                else
                    trappedWater += maxLeft-height [left];
                    left+=1;
                } else {
                if(height [right]>maxRight)
                    maxRight = height [right];
                else
                    trappedWater += maxRight-height[right];
                 right-=1;
                }
}
return trappedWater;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends