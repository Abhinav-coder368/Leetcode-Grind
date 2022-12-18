class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n=temperatures.size();
        vector<int>ans(n);
        
        for(int i=n-1;i>=0;i--){
            int j=i+1;
            while(j<n && ans[j] && temperatures[j]<=temperatures[i]){
                j+=ans[j];
            }
            if(j>=n) ans[i]=0;
            else if(temperatures[j]>temperatures[i]) ans[i]=j-i;
            else ans[i]=0;
        }
        return ans;
    }
};