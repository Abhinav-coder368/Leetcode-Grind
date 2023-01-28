class Solution {
public:
    string getHint(string secret, string guess) {
        int A = 0,ans=0;
        string str = "";
        for(int i=0;i<secret.size();i++){
            if(secret[i] == guess[i]){
                A++;
                secret.erase(secret.begin() + i);
                guess.erase(guess.begin() + i);
                i--;
            }
        }
        map<int,int> mp1,mp2;
        for(auto i : secret)
            mp1[i]++;
        for(auto i : guess)
            mp2[i]++;
        
        int sizeOfSecret = mp1.size();
        int sizeOfGuess = mp2.size();
        for(int i=0;i<secret.size();i++){
            if(mp2.find(secret[i]) != mp2.end()){
                ans++;
                mp2[secret[i]]--;
                if(mp2[secret[i]]==0) mp2.erase(secret[i]);
            }
        }
        
       
        
        str += to_string(A);
        str += "A";
        str += to_string(ans);
        str += "B";
        
        return str;
    }
};