class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1;
        vector<int> ans;
        while(i<100000){
            if ( std::find(arr.begin(), arr.end(), i) == arr.end() )
                ans.push_back(i);
            i++;
        }
        // for(int i=0;i<ans.size();i++)
        //     cout<<ans[i]<<" ";
    return ans[k-1];
    }
};