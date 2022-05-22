class Solution {
public:
    int percentageLetter(string s, char letter) {
        long double cnt=0;
        int len = s.size();
        for(int i=0;i<len;i++){
            if(letter==s[i]){
                cnt++;
            }
        }
        int res = (cnt*100/len);
        return res;
    }
};