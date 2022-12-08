class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high = nums.size()-1,ans=-1;
        while(low<=high){
            long long mid = (low+high)/2;
            if(target<nums[mid]){
                high = mid-1;
            }
            else if(target>nums[mid]){
                low = mid+1;
            }
            else if(target==nums[mid]){
                ans = mid;
                break;
            }
        }
        return ans;
        
    }
};