class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char , char> m = {
            {')' , '('},
            {'}' , '{'},
            {']' , '['}
        };
        for(char i : s){
            if(i == '(' || i == '{' || i=='[') st.push(i);
            else if(st.empty()) return false;
            else if(st.top() == m[i]) st.pop();
            else return false;
        }
        // if(st.empty()) return true;
        // else return false;
        return st.empty();
    }
};