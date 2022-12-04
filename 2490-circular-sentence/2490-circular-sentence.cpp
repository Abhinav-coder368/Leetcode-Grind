class Solution {
public:
    bool isCircularSentence(string s) {
        int n = s.size(),cnt=0,sp=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                sp++;
                if(s[i-1]==s[i+1]) 
                    cnt++;
            }
        }
        if(s[0]==s[n-1]) cnt++;
        
        if(sp+1==cnt) return true;
        return false;
    }
};