class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0,high=n-1,mid;
        while(low<=high){
            mid = (low+high)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                high = mid-1;
            else if(target>nums[mid])
                low = mid+1;
        }
        if(target<nums[mid])
        return mid;
        else
            return mid+1;
    }
};