class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long i = 0, j = 0,N=nums.size(),sum=0;
        sort(nums.begin(),nums.end());
        for (; j < N; ++j) {
            sum+=nums[j];
            if ((j-i+1)*nums[j]-sum>k) { // Increment the left edge ONLY when the window is invalid. In this way, the window GROWs when it's valid, and SHIFTs when it's invalid
        // CODE: update state using A[i]
                sum-=nums[i];
                ++i;
            }
    // after `++j` in the for loop, this window `[i, j)` of length `j - i` MIGHT be valid.
        }
    return j - i; // There must be a maximum window of size `j - i`.
    }
};