class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> v;
        int ans = count(nums.begin(),nums.end(),target),cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                cnt++;
                if(cnt==1)
                  v.push_back(i);
                if(cnt==ans)
                    v.push_back(i);
            }
        }
        if(cnt>=1) return v;
        return {-1,-1};
    }
};