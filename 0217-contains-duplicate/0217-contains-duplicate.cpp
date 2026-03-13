class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;
        for(int i: nums){
            if (numSet.find(i) != numSet.end()){
                return true;
            }
            numSet.insert(i);
        }
        return false;
    }
};