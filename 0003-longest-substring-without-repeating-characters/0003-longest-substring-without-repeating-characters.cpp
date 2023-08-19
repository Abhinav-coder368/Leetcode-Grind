class Solution {
public:
    /*TEMPLATE FOR SHRINKABLE SLIDING WINDOW
        int lengthOf Longest Substring(string s) {
            int l-0, r=0, n=nums. size(), ans=0;
            
                for(;r<n; r++) {
                // new element enters and might make the window invalid
                
                    for(;isWindowInvalid();l++) {
                    // try to make the window valid again
                    
                    }
                    
                    ans = max(ans, r - 1 + 1);
                }
                return ans;
            }*/
    int lengthOfLongestSubstring(string s) {
        int l = 0,r=0,n=s.size(),ans=0;
        unordered_map<char,int> mp;
        for(;r<n;r++){
            //new element enters and might mKE window invalid
            mp[s[r]]++;
            for(;mp[s[r]] > 1;l++){
                //try to make the window valid again
                mp[s[l]]--;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
        
        
        
        
//        unordered_set<char> set;
    
// 		int i = 0, j = 0, n = s.size(), ans = 0;
    
// 		while( i<n && j<n)
// 		{
// 			if(set.find(s[j]) == set.end()) //If the character does not in the set
// 			{
// 				set.insert(s[j]); //Insert the character in set and update the j counter
//                 j++;
// 				ans = max(ans, j-i); //Check if the new distance is longer than the current answer
// 			}
// 			else
// 			{
// 				set.erase(s[i]); 
//                 i++;
// 				/*If character does exist in the set, ie. it is a repeated character, 
// 				we update the left side counter i, and continue with the checking for substring. */
// 			}
// 		}
    
// 		return ans;
    }
};