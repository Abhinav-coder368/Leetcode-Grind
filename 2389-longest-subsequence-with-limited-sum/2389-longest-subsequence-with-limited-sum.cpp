class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(), nums.end());   // 1 2 4 5
         for (auto query : queries) {
            int cnt = 0;
            for (auto num : nums) {
                if(query >= num){ 
                    query -= num;
                    cnt++;
                }
                else
                    break;
            }
             ans.push_back(cnt);
         }
        return ans;
    }
};