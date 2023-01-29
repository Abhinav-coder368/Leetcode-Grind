class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt=0,idx1=0, idx2=0;;
        if(s1==s2) return true;
       for(int i=0;i<s1.size();i++){
           if(s1[i]!=s2[i]){
               cnt++;
               if(!idx1) idx1 = i; else idx2 = i;
           }
       }
        return (cnt==2) && s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1];
        return false;

        
    }
};