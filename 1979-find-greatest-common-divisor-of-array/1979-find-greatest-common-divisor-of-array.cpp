class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min =* min_element(nums.begin(),nums.end());
        int max =* max_element(nums.begin(),nums.end());
        
        int ans = gcd(min,max);
        return ans;
    }
};