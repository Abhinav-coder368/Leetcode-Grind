class Solution {
public:
    
    /*TEMPLATE FOR SHRINKABLE SLIDING WINDOW
        int lengthOf Longest Substring(string s) {
            int l-0, r=0, n=nums. size(), ans=0;
            
                for(;r<n; r++) {
                // new element enters and might make the window invalid
                
                    for(;isWindowInvalid();l++) {
                    // try to make the window valid again
                    
                    }
                    
                    ans = max(ans, r - l + 1);
                }
                return ans;
            }*/
    
    
    int maxFrequency(vector<int>& nums, int k) {
        
        
         long long l=0, r=0, n=nums. size(), ans=0,sum=0;
        sort(nums.begin(),nums.end());
            
                for(;r<n; r++) {
                // new element enters and might make the window invalid
                   sum += nums[r];
                    for(;nums[r]*(r-l+1) > sum+k;l++) {
                    // try to make the window valid again
                      sum -= nums[l];
                    }
                    
                    ans = max(ans, r - l + 1);
                }
                return ans;
        
        
        
        
    //     long long i = 0, j = 0,N=nums.size(),sum=0;
    //     sort(nums.begin(),nums.end());
    //     for (; j < N; ++j) {
    //         sum+=nums[j];
    //         if ((j-i+1)*nums[j]-sum>k) { // Increment the left edge ONLY when the window is invalid. In this way, the window GROWs when it's valid, and SHIFTs when it's invalid
    //     // CODE: update state using A[i]
    //             sum-=nums[i];
    //             ++i;
    //         }
    // // after `++j` in the for loop, this window `[i, j)` of length `j - i` MIGHT be valid.
    //     }
    // return j - i; // There must be a maximum window of size `j - i`.
    }
};