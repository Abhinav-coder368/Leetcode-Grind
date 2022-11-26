class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long res=0,sum=0,i=0;
        unordered_map<int,int> mp;
        while(i<k and i<nums.size()){
            mp[nums[i]]++;
            sum+=nums[i];
            i++;
        }
        if(mp.size()==k)
            res=sum;
        while(i<nums.size()){
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0) mp.erase(nums[i-k]);
            
            sum+=nums[i];
            sum-=nums[i-k];
            
            if(mp.size()==k)
                res = max(res,sum);
            i++;
        }
        return res;
    }
};