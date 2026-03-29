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
            if(m.find(i)==m.end()) st.push(i);
            // else if(st.empty()) return false;
            // else if(st.top() == m[i]) st.pop();
            // else return false;
            else if(st.empty() || st.top()!= m[i]) return false;
            else st.pop();
        }
        // if(st.empty()) return true;
        // else return false;
        return st.empty();
    }
};