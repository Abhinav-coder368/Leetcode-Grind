class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> v;
        for(int i=0;i<nums.size();i++){
            // int ele = nums[i];
            if(nums[i]!=0)
            v.push_back(nums[i]);
        }
         for(int i=0;i<nums.size();i++){
            // int ele = nums[i];
            if(nums[i]==0)
            v.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
    }
};