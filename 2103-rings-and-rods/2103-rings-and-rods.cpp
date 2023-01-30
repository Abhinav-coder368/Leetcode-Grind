class Solution {
public:
    int countPoints(string rings) {
        
        // for(int i=0;i<rings.size();i++)
        //     cout<<rings[i];
        map<char,vector<char>> mp;                // creating map of vector 
        for(int i=0;i<rings.size()-1;i++){
            mp[rings[i+1]].push_back(rings[i]);  // ways to insert data into map of vector
            i++;                                 // i++ because we're taking alternate value 
                                                // excluding char
        }
        
        int cnt=0;
        
        for(auto it  : mp){             // 0 --- BGR
                                        // 6 --- BRR
                                        // 9 --- G
        set<char>st;                         // redecalaring set to 0;
            for(auto i : it.second){    // for every it.second value it is inserting into set
                st.insert(i);           // (B) GR    :::>  inserting B into set then G then R;
            }
            if(st.size()==3)  cnt++;    // set.size()==3 cnt++
        }
       
 
        return cnt;
    }
};