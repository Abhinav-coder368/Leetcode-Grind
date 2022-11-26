class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int wstart =0, wend = 0 , wsum=0, ans = INT_MAX,flag=0;
        for(wstart =0;wstart<nums.size();wstart++){
            wsum+=nums[wstart];
                while(wsum>=target){
                    wsum-=nums[wend];
                    
                    ans = min(ans,wstart-wend+1);
                    wend++;
                    flag=1;
                }
        }
        if(flag==0) return 0;
        return ans;
    }
};