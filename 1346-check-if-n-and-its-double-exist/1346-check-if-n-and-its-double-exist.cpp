class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size(), check =0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==2*arr[j] || 2*arr[i]==arr[j] &&arr[i]!=0 &&arr[j]!=0){
                    check=1;
                    break;
                }
            }
        }
        if(check)
            return true;
        return false;
    }
};