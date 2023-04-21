class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> mp;
        char temp = 'a';
            for(int i=0;i<key.size();i++){
              if(key[i]!= ' ' && mp.find(key[i]) == mp.end()){
                mp[key[i]] = temp;
               temp++;
              }
            }
        
        int index;
        string s="";
        for(int i=0;i<message.size();i++){
            // for(auto it: mp){
                char ele = message[i];
                if(mp.find(ele)!=mp.end()){
                    // index = i+1;
                    
                    s+= mp[ele];
                }
            else
                s += " ";
            // }
        }
        // for(auto it : mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        return s;
    }
};