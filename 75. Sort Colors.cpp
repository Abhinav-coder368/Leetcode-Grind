class Solution {
public:
    // Two Pointer( + 1 iterator) Technique to solve Sort Colors Problem popularly known as DUTCH NATIONAL FLAG  algorithm.
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,low=0,high=n-1;
        while(i<=high){
            if(nums[i]==0){
                swap(nums[i],nums[low]);
                i++,low++;
            }else if(nums[i]==2){
                swap(nums[i],nums[high]);
                high--;
            }
            else 
                i++;
        }
    }
};
