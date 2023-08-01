class Solution {
    private:
    void help(int i, int n, int k, vector<int> &subSet, vector<vector<int>>                                                                               &ans)
{
    // If k is equal to 0, we have generated a Valid Subset of K length

    if (k == 0)
    {
        ans.push_back(subSet);
        return;
    }

    // If we don't have enough elements to make our subset, we shouldn't proceed further

    if (k > n - i + 1)
        return;

    // If i becomes greater than N, we should stop going forward

    if (i > n)
        return;

    // Our logic remains exactly same as Generating Subsets
    
    // Pick i-th Element

    subSet.push_back(i);
   
    // Ask Recursion to do the Rest of the Task

    help(i + 1, n, k - 1, subSet, ans);

    // Backtrack and undo the change
    subSet.pop_back();

    // Don't pick the i-th Element

    help(i + 1, n, k, subSet, ans);
}
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans ;
    vector<int> subSet  ;
        
    help(1 , n , k , subSet , ans) ;
        
    return ans ;
    }
};