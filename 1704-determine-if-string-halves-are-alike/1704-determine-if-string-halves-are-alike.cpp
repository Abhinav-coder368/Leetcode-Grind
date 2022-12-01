class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size(),i=0,cnt1=0,cnt2=0;
        string a1="",a2="";
        for(char c : s){
            
            if(i<n/2){
                a1+=c;
                i++;
            }
            else{
                a2+=c;
                i++;
            }
        }
        for(int i=0;i<a1.size();i++){
            if(a1[i]=='a'||a1[i]=='e'||a1[i]=='i'||a1[i]=='o'||a1[i]=='u'||
              a1[i]=='A'||a1[i]=='E'||a1[i]=='I'||a1[i]=='O'||a1[i]=='U')
                cnt1++;
        }
        for(int i=0;i<a2.size();i++){
            if(a2[i]=='a'||a2[i]=='e'||a2[i]=='i'||a2[i]=='o'||a2[i]=='u'||
              a2[i]=='A'||a2[i]=='E'||a2[i]=='I'||a2[i]=='O'||a2[i]=='U')
                cnt2++;
        }
        if(cnt1==cnt2)
           return true;
        return false;
    }  
};