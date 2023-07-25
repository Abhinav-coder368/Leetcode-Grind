class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = arr[0],index;
        for(int i=1;i<arr.size();i++){
            if( low < arr[i] ){
                low = max(low,arr[i]);
                index = i;
            }
        }
        return index;
    }
};