class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        /*TEMPLATE FOR SHRINKABLE SLIDING WINDOW
        int lengthOf Longest Substring(string s) {
            int l-0, r=0, n=nums. size(), ans=0;
            
                for(;r<n; r++) {
                // new element enters and might make the window invalid
                
                    for(;isWindowInvalid();l++) {
                    // try to make the window valid again
                    
                    }
                    
                    ans = max(ans, r - 1 + 1);
                }
                return ans;
            }*/
        
        long  l=0,r=0,n=nums.size(),prod=1,ans=0;
        
        for(;r<n;r++){
            //new element enters and might make the window invalid 
            prod *= nums[r];
            for(;prod>=k and l<=r ;l++){
                //try to make the window valid again
                prod/=nums[l];
            }
            ans += (r-l+1);   // for window [5 2 6] there will be 3 subarray with product less than k we can't separatly count them so we are take lenght into consideration.
        }
        return ans;
    }
};