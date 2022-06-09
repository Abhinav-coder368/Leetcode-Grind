class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] )
                    cnt++;
                
            }
        }
        return cnt;
    }
};

// Complexity
// Time O(N)
// Space O(N)

// using map


// int numIdenticalPairs(vector<int>& nums) {
//         int n=nums.size();
//         int total=0;
//         map<int ,int> mp;
//         for(int i=0;i<n;i++){
//             total+=mp[nums[i]]; //and before incrementing the count i'm finding how many numbers are there before this  
//             mp[nums[i]]++;   // in the map mp i'm storing the nums[i] and increment it's count. and before incrementing the 
//                                  count i'm finding how many numbers are there before this
//         }
//     return total;
//     }


