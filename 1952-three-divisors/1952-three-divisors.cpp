class Solution {
public:
    bool isThree(int n) {
        int i = 1,cnt=0;
        while(i<=n){
            
            if(n%i==0)
                cnt++;
            i++;
            
        }
        return (cnt==3);
    }
};