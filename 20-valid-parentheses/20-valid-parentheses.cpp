class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char c:s){
            if(c == '(' or c == '{' or c == '['){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                if(c == ')' and st.top()!='(') return false;
                if(c == '}' and st.top()!='{') return false;
                if(c == ']' and st.top()!='[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};