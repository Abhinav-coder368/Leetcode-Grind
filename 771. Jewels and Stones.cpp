class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size(),cnt=0;
        int m=stones.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(jewels[i]==stones[j])
                    cnt++;
            }
        }
        return cnt;
    }
};
