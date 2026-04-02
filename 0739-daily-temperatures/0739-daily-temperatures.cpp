class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        // for(int i = 0 ; i < n ; i++){
        //     int j = i+1 ;
        //     while(j < n && temperatures[i]>=temperatures[j]) j++;
        //     if(j==n) temperatures[i]=0;
        //     else temperatures[i] = j-i;
        // }
        // return temperatures;

        stack<int> st;
        vector<int> ans(n,0);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev = st.top();
                st.pop();
                ans[prev] = i - prev;
            }
            st.push(i);
        }

        return ans;
        
    }
};
