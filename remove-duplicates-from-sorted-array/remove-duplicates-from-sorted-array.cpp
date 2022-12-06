class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int i;
         set<int> ::iterator itr;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int ele   = nums[i];
            s.insert(ele);
        }
         nums.clear();
        for(auto i=s.begin();i!=s.end();i++)
        {
            nums.push_back(*i);
        }

        return nums.size();
    }
};
//TWO POINTER APPOROACH

//     int removeDuplicates(vector<int>& a) 
//     {
//         int n=a.size();
//         if(n<=1)
//         return n;
//         int j=0;
//         for(int i=0;i<n-1;i++)
//         {
//             if(a[i]!=a[i+1])
//             a[j++]=a[i];
//         }
//         a[j++]=a[n-1];
//         return j;

//     }