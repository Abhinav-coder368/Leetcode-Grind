class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*brute force
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target)
        //         return i;
        // }
        // return -1;
        */
//         auto it = std::minmax_element(nums.begin(), nums.end());
//         int min_idx = std::distance(nums.begin(), it.first);
//         cout << min_idx<<endl;
//         // int minimum = *min_element(nums.begin(),nums.end());
        
//         // cout<<minimum<<endl;
        int low= 0,high = nums.size()-1;
        if(nums.size()==2)
            if(nums[0]==target) return 0;
            else if(nums[1]==target) return 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(target==nums[mid])
                return mid;
            else if(nums[high]>nums[mid])
            {
                // if(target==nums[high]) return high;
                if(target<=nums[high] and target>nums[mid])
                    low = mid+1;
                else
                    high = mid-1;
            }
            else
                // if(target==nums[high]) return high;
                if(target>=nums[low] and target<nums[mid])
                    high = mid-1;
                else 
                    low = mid+1;
        }
        return -1;
    }
};