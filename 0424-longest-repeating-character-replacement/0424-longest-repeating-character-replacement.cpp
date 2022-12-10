class Solution {
public:
    int characterReplacement(string s, int k) {
        int windowStart =0 ,maxi=0;
        int maxLength = INT_MIN;
        map<char,int> mp;
        for(int windowEnd = 0; windowEnd < s.size(); windowEnd++) {
            mp[s[windowEnd]]++;
            maxi = max(maxi, mp[s[windowEnd]]);
            if((windowEnd-windowStart+1) - maxi > k){
                mp[s[windowStart]]--;
                windowStart++;
            }
            maxLength = max(maxLength, windowEnd - windowStart + 1);
        }
        return maxLength;
    }
};