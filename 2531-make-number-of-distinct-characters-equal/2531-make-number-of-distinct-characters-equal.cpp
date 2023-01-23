class Solution {
public:
    
    void insertAndRemove(unordered_map<char,int> &mp, char c1, char c2){
        mp[c1]++;
        mp[c2]--;
        if(mp[c2]==0) mp.erase(c2);
    }
    bool isItPossible(string word1, string word2) {
        unordered_map<char,int> mp1,mp2;
        for(auto i : word1)
            mp1[i]++;
        for(auto i : word2)
            mp2[i]++;
        
        for(char c1='a'; c1<='z'; c1++){
            for(char c2='a'; c2<='z'; c2++){
                if(mp1.count(c1)==0 || mp2.count(c2)==0) continue; // if any of the char is not present then skip
				
                insertAndRemove(mp1, c2, c1); // insert c2 to word1 and remove c1 from word1
                insertAndRemove(mp2, c1, c2); // insert c1 to word2 and remove c2 from word2
                
        
                if(mp1.size()==mp2.size()) return true;
        
//             mp1        mp2
//             a   -1         a -2
//             b   -1         b -1
//             c   -2         
//             
       
                insertAndRemove(mp1, c1, c2); // insert c1 back to word1 and remove c2 from word1             
                insertAndRemove(mp2, c2, c1); // insert c2 back to word2 and remove c1 from word2
            }
    
        }
        return false;
    }
};