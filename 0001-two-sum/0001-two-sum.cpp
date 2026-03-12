class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int rem = 0 ;
        for(int i = 0 ; i<nums.size(); i++){
            rem = target - nums[i];
            if(m.find(rem)==m.end()) m[nums[i]]=i;
            else{
                return {i , m[rem]};
            }
        }
        return {0};
    }
};