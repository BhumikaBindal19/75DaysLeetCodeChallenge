class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for (int n : nums) {
            counter[n]++;
        }
        
        vector<pair<int, int>> v(counter.begin(), counter.end());
        sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second > b.second; // descending
        });

        vector<int> res;
        for(int i=0 ; i<k ;i++){
            res.push_back(v[i].first);
        }
        return res;
    }
};