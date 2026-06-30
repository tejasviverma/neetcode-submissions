class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string& token : tokens){
            if(token != "-" && token != "+" && token != "*" && token != "/"){
                st.push(stoi(token));
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                int results = 0;
                if (token == "+"){
                results = a+ b;
                } else if (token == "-"){
                    results = a - b;
                } else if(token == "*"){
                    results = a*b;
                } else{
                    results = a/b;
                }

                st.push(results);
            }
        }  
        return st.top();  
    }
};
