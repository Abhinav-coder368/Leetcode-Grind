class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int wstart =0;
        int wend =0;
        double wsum=0,avg=0,maxavg=INT_MIN;
        for(wstart =0;wstart<nums.size();wstart++){
            wsum+=nums[wstart];
            if(wstart-wend+1==k){
                avg = (double)wsum/k;
                maxavg = max(maxavg,avg);
                wsum-=nums[wend];
                wend++;
            }
        }
        return maxavg;
    }
};