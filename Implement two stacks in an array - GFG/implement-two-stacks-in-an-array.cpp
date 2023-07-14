//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
    stack<int> st1; 
    stack<int> st2;
    //Function to push an integer into the stack1.
    void push1(int x){
        
       
            st1.push(x);
        
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       
       
            st2.push(x);
        
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        while(!st1.empty()){
            int x = st1.top();
            st1.pop();
            return x;
        }
        return -1;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       while(!st2.empty()){
            int y = st2.top();
            st2.pop();
            return y;
        }
        return -1;
    }
};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends