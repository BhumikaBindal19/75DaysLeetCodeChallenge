class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zeroCount = 0;
        int zeroIndex = -1;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zeroCount++;
                zeroIndex = i;
            } else {
                product *= nums[i];
            }
        }

        vector<int> ans(nums.size(), 0);

        if(zeroCount > 1) {
            return ans; 
        }

        if(zeroCount == 1) {
            ans[zeroIndex] = product;
            return ans;
        }

        for(int i = 0; i < nums.size(); i++) {
            ans[i] = product / nums[i];
        }

        return ans;
    }
};