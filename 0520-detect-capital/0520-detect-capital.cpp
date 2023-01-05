class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0,small=0,firstcap=0,n=word.size();
        for(auto ele : word){
            if(ele >='A' and ele<='Z'){
                cap++;
            }
        }
        for(auto ele : word){
            if(ele >='a' and ele<='z'){
                small++;
            }
        }
        if(word[0]>='A' and word[0]<='Z') firstcap++;
        for(int i =1;i<word.size();i++){
            if(word[i]>='a' and word[i]<='z')
                firstcap++;
        }
        if(cap==n|| small==n || firstcap==n) return true;
        return false;
    }
};