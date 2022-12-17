class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
        for (auto x : tokens){
            if (x == "+" or x == "-" or x == "*" or x == "/"){
                long long int op2 = st.top(); st.pop();
                long long int op1 = st.top(); st.pop();
                if (x == "+"){
                    st.push(op2 + op1);
                }
                else if (x == "-"){
                    st.push(op1 - op2);
                }
                else if (x == "*"){
                    st.push(op1 * op2);
                }
                else if (x == "/"){
                    st.push(op1 / op2);
                }
            }
            else {
                long long int num = stoi(x);
                st.push(num);
            }
        }
        return st.top();
             
    }
};