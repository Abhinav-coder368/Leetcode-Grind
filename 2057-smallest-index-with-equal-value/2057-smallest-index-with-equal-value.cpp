class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans = INT_MAX,flag=0;
        for(int i=0;i<nums.size();i++){
            if(i%10 == nums[i]){
                ans = min(ans,i);
                flag=1;
            }
        }
        if(flag==1)
           return ans;
        return -1;
    }
};