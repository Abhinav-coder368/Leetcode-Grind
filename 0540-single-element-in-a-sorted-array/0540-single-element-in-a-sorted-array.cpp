class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         // if(nums.size()==1) return nums[0];
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int m=l+(r-l)/2;

            if(nums[m]==nums[m+1])
            {
                if((r-m+1)%2==0)
                    r=m-1;
                else
                l=m;
            }
            else if(nums[m]==nums[m-1])
            {
                if((m-l+1)%2==0)
                    l=m+1;
                else
                    r=m;
            }
            else
                return nums[m];
        }
        return nums[l];
        
    }
};