class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         vector<int> v;
//         int profit=0;
//         for(int i=0;i<prices.size();i++){
//             if(prices[i]<prices[i+1]){
//                 int ele = prices[i];
//                 v.push_back(ele);
//             }
//         }
//         for(int i=0;i<v.size();i++)
//             profit = profit+(v[i+1]-v[i]);
        
//         return profit;
        
  
        // DATE : 5/7/2023
        
        int ans = 0;
        for(int i =0;i<prices.size()-1;i++){
            if(prices[i+1] - prices[i] >= 1){
                ans += prices[i+1] - prices[i];
                
            }
        }
        return ans;
    }
};