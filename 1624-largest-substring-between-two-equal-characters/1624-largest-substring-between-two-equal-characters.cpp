class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i=0,cnt=0,ans=INT_MIN,ind,flag;
        map<char,int> mp;
       while(i < s.size())   {
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = i;
 
            }
           else{

              ind = i;
              ans = max(ans, ind-mp[s[i]] -1);
           }
           i++;
       }
        
        if(ans==INT_MIN) return -1;
        return ans;
    }
};