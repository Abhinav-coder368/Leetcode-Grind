class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
      int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
           if(nums1[i]>nums2[j]){
              nums1[k]=nums1[i];
               k--,i--;
            }
            else{
              nums1[k]=nums2[j];
               k--,j--;
             }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }
};

//BRUTE FORCE
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//        for(int i=0; i<n; i++){
//             nums1[m+i] = nums2[i];
        
//        }
//        sort(nums1.begin(),nums1.end());
//     }
