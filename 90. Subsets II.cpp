class Solution {
public: 
    void func(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &subset){
       subset.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            func(i+1,nums,ds,subset);
            ds.pop_back();
        }
       
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> subset;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        func(0,nums,ds,subset);
        
        return subset;
    }
};
