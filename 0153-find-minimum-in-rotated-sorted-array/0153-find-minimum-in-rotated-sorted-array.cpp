class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = n-1;
        int last = nums[n-1];
        if(nums[0] <= last) return nums[0];
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid]<=last) high = mid-1;
            else low = mid+1;
        }
        return nums[low];
    }
};