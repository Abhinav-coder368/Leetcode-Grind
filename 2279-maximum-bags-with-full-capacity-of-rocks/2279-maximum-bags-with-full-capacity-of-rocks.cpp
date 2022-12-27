class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> diff;
        int fullbags=0;
        for(int i=0;i<capacity.size();i++){
            int res = capacity[i] - rocks[i];
            diff.push_back(res);
        }
        sort(diff.begin(),diff.end());
        for(int i=0;i<diff.size();i++){       // 1  1 0 1 --> 0 1 1 1     // 8 0 2 --> 0 2 8
            if (additionalRocks >= diff[i]) {
                additionalRocks -= diff[i];
                fullbags++;
            }
            else {
                break;
            }
        }
        // int ans = count(diff.begin(),diff.end(),0);
        // return ans;
        return fullbags;
    }
};