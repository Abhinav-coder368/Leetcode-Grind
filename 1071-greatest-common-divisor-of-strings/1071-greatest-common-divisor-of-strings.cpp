class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        
        if(str1 + str2 == str2 + str1)
        {
           int x = gcd(n1, n2);
           return str1.substr(0, x);
        }
    
        return "";
        
    }
};