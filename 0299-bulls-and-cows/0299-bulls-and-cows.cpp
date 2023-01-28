class Solution {
public:
    string getHint(string secret, string guess) {
        int A = 0,ans=0;
        string str = "";
        for(int i=0;i<secret.size();i++){
            if(secret[i] == guess[i]){
                A++;
                secret.erase(secret.begin() + i);
                guess.erase(guess.begin() + i);     // element ko erase karne pr dono string ka size kam ho raha tha isley i-- kiya ....
                // for example: str = hello 
                                   // 01234    //indexing        'e' was at position 1
                // After deletion of h: ello
                                   //   0123   // indexing  now 'e' is at position 0
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
                if(mp2[secret[i]]==0) mp2.erase(secret[i]);  //freq == 0 hone ka matlab yeh nahi h ki element map se remove ho gaya h.......freq toh (-)ve bhi ja sakti h .....isley mp2[secret[i]] == 0(secret[i] ki freq 0 hojaye tb) hone pr us element ko map se erase kr do
            }
        }
        
       
        
        str += to_string(A);
        str += "A";
        str += to_string(ans);
        str += "B";
        
        return str;
    }
};