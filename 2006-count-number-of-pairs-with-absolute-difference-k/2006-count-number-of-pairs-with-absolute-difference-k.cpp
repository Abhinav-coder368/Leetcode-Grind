class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        // int cnt=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(abs(nums[i] - nums[j]) == k){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        unordered_map<int, int> freq;
        int res = 0;
        
        for (auto num : nums) {
            res += freq[num+k] + freq[num-k];
            freq[num]++;
        }
        
        return res;
    }
};