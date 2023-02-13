class Solution {
public:
    int countOdds(int low, int high) {
        int cnt = (high-low)+1, ans;
        if(low%2==1 and high%2==1)
        ans = (cnt/2)+1;
        if(low%2==0 and high%2==0  ||  low%2==0 and high%2==1 || low%2==1 and high%2==0)
        ans = cnt/2;
        
        return ans;
    }
};