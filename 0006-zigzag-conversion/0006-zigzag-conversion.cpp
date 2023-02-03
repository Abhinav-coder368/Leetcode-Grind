// class Solution {
// public:
//     string convert(string s, int numRows) {
        
//         map<char,int> mp;
//         string ans="",res="";
//         int i=0,j=1,cnt=0;
//         while(i<s.size()){
//             ans+=s[i];
//             if(cnt%2==0)
//                i+=numRows+1;
//             else
//                i+=numRows;
//             if(i>s.size()){
//                 i=j;
//                 j++;
//                 cnt++;
//                 numRows--;
//                 if(numRows == 1) break;
//             }
            
//         }
        
//         for(int i=0;i<ans.size();i++){
//             mp[ans[i]]++;
//         }
        
//         for(int i=0;i<s.size();i++){
//             if(mp.find(s[i])==mp.end()){
//                 res+=s[i];
//             }
//             else{
//                 mp[s[i]]--;
//                 if(mp[s[i]] == 0)
//                     mp.erase(s[i]);
//             }
//         }
        
        
//         return ans+res;
//     }
// };

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        string answer;
        int n = s.size();
        int charsInSection = 2 * (numRows - 1);

        for (int currRow = 0; currRow < numRows; ++currRow) {
            int index = currRow;

            while (index < n) {
                answer += s[index];

                // If currRow is not the first or last row
                // then we have to add one more character of current section.
                if (currRow != 0 && currRow != numRows - 1) {
                    int charsInBetween = charsInSection - 2 * currRow;
                    int secondIndex = index + charsInBetween;
                    
                    if (secondIndex < n) {
                        answer += s[secondIndex];
                    }
                }
                // Jump to same row's first character of next section.
                index += charsInSection;
            }
        }

        return answer;
    }
};