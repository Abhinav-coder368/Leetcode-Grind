//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    /* First understand what LOWER BOUND does.

LOWER BOUND RETURNS THE INDEX/ITERATOR OF THE ELEMENT WHICH IS JUST GREATER THAN OR EQUAL TO ARR[i], Incase there is nothing like that, it returns the size of the vector/array /END OF ITERATOR.

Now, let us see how binary search is actually helping us to reduce the complexity, I hope you are familiar with the N*N approach since I would not be discussing that here.

 

Ok, the trick binary search is doing here is IT IS PLACING EVERY SINGLE ELEMENT IN ARR[i] TO ITS ORIGINAL PLACE IN THE IN-PROGESS LIS CONSTRUCTION.

 

Did not get it, well let us take a example

 

Let us say we have a LIS(in progress)={1,3,5};

Now since we are trying to place every single element of ARR[i] in its correct place in LIS, we binary search for ARR[i] and there can be TWO cases for it

 

After BINARY SEARCH we found an index where element is equal to or just greater than ARR[i], so what we do is place arr[i] in the element position
We did not get any element in the building LIS, and therefore we need to append add it in LIS since there is no element greater than or equal to ARR[i] in LIS
LIS(in progress)={1,3,5};

Let us say we encounter ARR[i]=4, we binary search for it in LIS, we get index of element 5, we place 4 in-place of 5 because it is its original place.

 

LIS becomes ={1,3,4};

 

Now pay attention closely and see how binary search is so cool in finding LIS effectively.

 

As we are proceeding in ARR, let us say we found ARR[i]=5, yeah the 5 we just removed and placed 4 in place of it. But this ARR[i]=5 is found while iterating forward. Can be said this is the duplicate of that 5 we found earlier, so we binary search for ARR[i]=5 in LIS and found that there is no element which is equal or greater than 5, so according to our condition we will append it to our LIS

 

LIS becomes={1,3,4,5}

 

See how placing 4 in place of 5 earlier helped us increasing LIS now. This is how binary search works actually, it is placing every single ARR[i] in its correct place in the building LIS

 

Thank you and ask question if you have. Do comment something so I know this is was helpful for yall

 Sapport for more such explainations*/
    int longestSubsequence(int n, int a[])
    {
        vector<int> res;
        for(int i = 0; i < n; i++) {
            int index=lower_bound(res.begin(), res.end(), a[i])-res.begin();
            if(index==res.size()) {
                res.push_back(a[i]);
            } 
            else {
                res[index]=a[i];
            }
        }
        return res.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends