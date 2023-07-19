class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 0;
        int k = INT_MIN;
        
        for (int i = 0; i < intervals.size(); i++) {
            if(intervals[i][0] >= k){
                k = intervals[i][1];
            }
            else {
                // Case 2
                ans++;
            }
        }
        
        return ans;
    }
};