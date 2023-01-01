class Solution {
public:
    string fractionToDecimal(int nu, int de) {
        if(!nu) return "0";
        string ans = "";
        if (nu > 0 ^ de > 0) ans += '-';
        long n = labs(nu), d = labs(de);
        long q = n / d;
        long r = n % d;
        ans += to_string(q);
        if(r==0)
            return ans;
        else
            ans += '.';
        
        unordered_map<long,int> mp;
        
        while(r > 0){
            if(mp.find(r)!=mp.end()){
                int len = mp[r];
                ans.insert(ans.begin()+len, '(');
                ans += ')';
                break;
            }
            else{
                mp.insert(pair<int, int>(r, ans.size()));
                r *= 10;
                q = r / d;
                r = r % d;
                ans += to_string(q);
            }
        }
        return ans;
        
        
    }
};