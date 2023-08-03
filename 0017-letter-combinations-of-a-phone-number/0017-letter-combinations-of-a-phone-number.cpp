class Solution {
public:
    vector<string> ans;
    string keyPad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "qprs", "tuv", "wxyz"};
    
    void res(int index, string& path, const string& digits) {
        if (index == digits.size()) {
            ans.push_back(path);
            return;
        }
        for (char c : keyPad[digits[index] - '0']) {
            path[index] = c;
            res(index + 1, path, digits);
        }
    }
    
    vector<string> letterCombinations(const string& digits) {
        if (digits.empty()) return ans;
        string path = digits;
        res(0, path, digits);
        return ans;
    }
};
