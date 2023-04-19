class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size();
        int m=stones.size();
        map<char,int> mp;
      
            for(int j=0;j<n;j++){
                //
                mp[jewels[j]]++;
            }
        int cnt=0;
            for(int j=0;j<m;j++)
               cnt+=mp[stones[j]];
        return cnt;
    }
};


// int numJewelsInStones(string jewels, string stones) {
//         int n=jewels.size(),cnt=0;
//         int m=stones.size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(jewels[i]==stones[j])
//                     cnt++;
//             }
//         }
//         return cnt;
//     }